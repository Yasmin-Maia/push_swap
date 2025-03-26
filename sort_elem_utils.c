/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elem_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:10:03 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/26 15:48:54 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_elem *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->num;
	while (stack)
	{
		if (stack->num < min)
			min = stack->num;
		stack = stack->next;
	}
	return (min);
}

int	get_min_position(t_elem *stack, int min)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->num == min)
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}

void	move_to_top(t_elem **a, int min)
{
	int	pos;
	int	size;

	pos = get_min_position(*a, min);
	size = list_size(*a);
	if (pos <= size / 2)
	{
		while ((*a)->num != min)
			ra(a);
	}
	else
	{
		while ((*a)->num != min)
			rra(a);
	}
}

int	find_max(t_elem *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->num;
	while (stack)
	{
		if (stack->num > max)
			max = stack->num;
		stack = stack->next;
	}
	return (max);
}
