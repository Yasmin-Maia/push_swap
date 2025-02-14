# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 14:53:46 by ymaia-do          #+#    #+#              #
#    Updated: 2025/02/03 15:02:15 by ymaia-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFTPRINTF = ./ft_printf/ft_printf.a
LIBFTPRINTF_DIR = ./ft_printf
LIBFT = ./libft/libft.a
LIBFT_DIR = ./libft
SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils2.c
		

OBJS = $(SRCS:.c=.o)
CC = cc -c -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f $(NAME)
	
re: fclean all