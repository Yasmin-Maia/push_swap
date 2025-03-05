/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elem_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:10:03 by yasmin            #+#    #+#             */
/*   Updated: 2025/02/21 18:56:42 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_elem *stack)
{
	int	min;

	min = stack->num;
	while(stack)
	{
		if(stack->num < min)
			min = stack->num;
		stack = stack->next;
	}
	return (min);
}

void	move_to_top(t_elem **a, int min)
{
	while ((*a)->num != min)
		ra(a);
}

int find_max(t_elem *stack)
{
	int max;

	if(!stack)
		return (0);
	max = stack->num;
	while(stack)
	{
		if(stack->num > max)
			max = stack->num;
		stack = stack->next;
	}
	return (max);
}

int	get_max_bits(t_elem *stack)
{
	int	max;
	int	bits;

	max = find_max(stack);
	bits = 0;
	while(max)
	{
		max >>= 1;
		bits++;
	}
	return (bits);
}

int	list_size(t_elem *stack)
{
	int	count;

	count = 0;
	while(stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}