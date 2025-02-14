# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 12:48:14 by ymaia-do          #+#    #+#              #
#    Updated: 2025/01/09 14:00:08 by ymaia-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
SRCS = ft_printf.c ft_printf_utils.c
		

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
