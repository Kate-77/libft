# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 19:40:06 by kmoutaou          #+#    #+#              #
#    Updated: 2021/11/07 19:40:52 by kmoutaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=libft.a

CC			= gcc

FLAGS		= -Wall -Wextra -Werror

SRCS		= $(wildcard ./srcs/ft_*.c)

OBJS		= ${SRCS:.c=.o}

HEADERS		= .

all: 		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADERS}

clean:
			rm -f ${OBJS}

fclean: 	clean
			rm -f ${NAME}

re: 		fclean all

.PHONY: 	all re clean fclean 
