# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fholwerd <fholwerd@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/01 15:57:33 by fholwerd      #+#    #+#                  #
#    Updated: 2020/09/02 19:33:42 by znajda        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = main.c arrayfill.c arraystuff.c find_biggest_square.c function.c get_solution.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
