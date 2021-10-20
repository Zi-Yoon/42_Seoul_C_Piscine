# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 22:42:23 by byan              #+#    #+#              #
#    Updated: 2021/10/20 15:58:50 by byan             ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
SRCS	= srcs/main.c
OBJS	= ${SRCS:.c=.o}
LIBC	= ar rc
LIBR	= ranlib
INCS	= includes
RM		= rm -f
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o: 
	${CC} ${CFLAGS} -I${INCS} -c $< -o ${<:.c=.o} 

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
