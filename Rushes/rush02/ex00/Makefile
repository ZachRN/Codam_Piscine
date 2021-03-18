# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dgiannop <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/30 16:59:53 by dgiannop      #+#    #+#                  #
#    Updated: 2020/08/30 21:27:37 by znajda        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = main.c file_manipulation.c dict_errors.c dataparse.c
OBJS = ${SRCS:.c=.o}
INCS = includes
CC = gcc
RM = rm -f
FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

${OBJS}:
	${CC} -c ${SRCS} ${FLAGS}
clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
