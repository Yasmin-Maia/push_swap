/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:39:42 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/02/21 19:40:46 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_elem
{
	int num;
	struct s_elem *next;
}	t_elem;

void	pa(t_elem **a, t_elem **b);
void	pb(t_elem **b, t_elem **a);

void	rra(t_elem **a);
void	rrb(t_elem **b);
void	rra_no_print(t_elem **a);
void	rrb_no_print(t_elem **b);
void	rrr(t_elem **a, t_elem **b);

void	ra(t_elem **a);
void	rb(t_elem **b);
void	ra_no_print(t_elem **a);
void	rb_no_print(t_elem **b);
void	rr(t_elem **a, t_elem **b);

void	sa(t_elem **a);
void	sb(t_elem **b);
void	sa_no_print(t_elem **a);
void	sb_no_print(t_elem **b);
void	ss(t_elem **a, t_elem **b);

char	**split_arg(char *str, int *ac, int *num, int *i);
void	free_argv(char **argv);
int	check_arg(int ac, char **av, t_elem **a);
int	is_number(char *str);
int	check_duplicate(t_elem *stack, int num);

t_elem *create_elem(int num);
void	add_elem(t_elem **stack, t_elem *new);

int	find_min(t_elem *stack);
void	move_to_top(t_elem **a, int min);
int find_max(t_elem *stack);
int	get_max_bits(t_elem *stack);
int	list_size(t_elem *stack);

int	is_sorted(t_elem *a);
void	sort_three(t_elem **a);
void	sort_five(t_elem **a, t_elem **b);
void	radix_sort(t_elem **a, t_elem **b);

#endif