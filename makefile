# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 14:53:46 by ymaia-do          #+#    #+#              #
#    Updated: 2025/03/26 16:01:46 by ymaia-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT_DIR = ./libft
LIBFTPRINTF_DIR = ./ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTPRINTF = $(LIBFTPRINTF_DIR)/ft_printf.a

SRCS = create_stack.c \
       error.c \
       main.c \
       neutralize.c \
	   parsing.c \
       push.c \
       reverse_rotate.c \
       rotate.c \
       sort_elem_utils.c \
       sort_elem.c \
       swap.c \
	   sort_radix.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = $(LIBFT) $(LIBFTPRINTF)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(LIBFTPRINTF)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(LIBFTPRINTF):
	make -C $(LIBFTPRINTF_DIR)

clean:
	@make -C $(LIBFT_DIR) clean
	@make -C $(LIBFTPRINTF_DIR) clean
	rm -f $(OBJS)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@make -C $(LIBFTPRINTF_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re