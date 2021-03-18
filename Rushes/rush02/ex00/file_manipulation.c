/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file_manipulation.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 15:57:15 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/08/30 21:01:26 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define MIN_LINES 41
#define MIN_CHARS 80
#define INIT_BUFFER 3280

void	ft_print_dict_error(void);

int		ft_file_size(char *file_name, int cnt)
{
	int fd;
	int nchr;
	char **buffer;
	int file_size;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		ft_print_dict_error();
	buffer = (char **)malloc(sizeof(char *) * cnt);
	nchr = read(fd, buffer, cnt);
	file_size = 0;
	if (nchr == cnt)
	{
		close(fd);	
		return(ft_file_size(file_name, cnt * 2));
	}
	else if (nchr != cnt)
	{
		close(fd);
		file_size = nchr;
	}
	return (file_size);
}

char	*ft_create_dict(char *file_name)
{
	int fd;	
	char *line_array;		
	int file_size;

	file_size = ft_file_size(file_name, INIT_BUFFER);
	fd = open(file_name, O_RDONLY);	
	line_array = (char *)malloc(sizeof(char) * file_size);	
	read(fd, line_array, file_size);
	return (line_array);	
}
