# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 14:53:46 by ymaia-do          #+#    #+#              #
#    Updated: 2025/02/21 20:18:26 by yasmin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT_DIR = ./libft
LIBFTPRINTF_DIR = ./ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTPRINTF = $(LIBFTPRINTF_DIR)/ft_printf.a

SRCS = check.c \
       create_stack.c \
       main.c \
       push.c \
       reverse_rotate.c \
       rotate.c \
       sort_elem.c \
       sort_elem_utils.c \
       swap.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = $(LIBFT) $(LIBFTPRINTF)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(LIBFT):
	make -C $(LIBFT_DIR)

$(LIBFTPRINTF):
	make -C $(LIBFTPRINTF_DIR)


.PHONY: all clean fclean re
