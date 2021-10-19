# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 22:42:23 by byan              #+#    #+#              #
#    Updated: 2021/10/19 23:27:47 by byan             ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
OBJS	= ${SRCS:.c=.o}
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
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

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm