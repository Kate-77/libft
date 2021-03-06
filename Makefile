# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 19:40:06 by kmoutaou          #+#    #+#              #
#    Updated: 2021/11/22 09:05:48 by kmoutaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= cc

FLAGS		= -Wall -Wextra -Werror

SRCS		= ft_isalpha.c ft_isdigit.c \
			  ft_isalnum.c ft_isascii.c \
			  ft_isprint.c ft_strlen.c \
			  ft_memset.c ft_bzero.c \
			  ft_memcpy.c ft_memmove.c \
			  ft_strlcpy.c ft_strlcat.c \
			  ft_toupper.c ft_tolower.c \
			  ft_strchr.c ft_strrchr.c \
			  ft_strncmp.c ft_memchr.c \
			  ft_memcmp.c ft_strnstr.c \
			  ft_atoi.c ft_calloc.c \
			  ft_strdup.c ft_substr.c \
			  ft_strjoin.c ft_itoa.c \
			  ft_strtrim.c ft_split.c \
			  ft_striteri.c ft_strmapi.c \
			  ft_putchar_fd.c ft_putstr_fd.c \
			  ft_putendl_fd.c ft_putnbr_fd.c

BSRCS		= ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
			  ft_lstsize_bonus.c ft_lstlast_bonus.c \
			  ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			  ft_lstclear_bonus.c ft_lstiter_bonus.c \
			  ft_lstmap_bonus.c

OBJS		= $(SRCS:.c=.o)

BOBJS		= $(BSRCS:.c=.o)

HEADERS		= .

all: 		$(NAME)

$(NAME):	$(OBJS) 
			ar rcs $(NAME) $(OBJS)

%.o: %.c
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I $(HEADERS)
			ar rcs $(NAME) ${<:.c=.o}

bonus: 		$(BOBJS)

clean:
			rm -f $(OBJS) $(BOBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: 	all re clean fclean 
