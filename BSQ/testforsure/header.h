/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fholwerd <fholwerd@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 18:49:45 by fholwerd      #+#    #+#                 */
/*   Updated: 2020/09/02 16:58:06 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 8000000

int		ft_strlen(char *str, int counter);
void	ft_putstr(char *str);
int		ft_atoi(char *str, int i);
char	*fileget(char *file, int size, char *soloarray);
void	find_biggest_square(char **map, char signs[3], int *size, int **mapn);
int		arrayerror(int size[2], char signs[3], char *file);
char	**ft_arrayfill(char **array, int size[2], char *file);
void	ft_arraydisplay(char **array, int *size);
void	get_solution(char **map, char signs[3], int size[2]);
int		outoflines(char *str);
char	**ft_arrayfill2(char **array, int size[2],
char *soloarray, int counter);
int		errorcheck(char *array, int size[2], char signs[3]);

#endif
