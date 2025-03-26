/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:48:09 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/03/26 16:03:23 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_elem *stack)
{
	int	max_index;
	int	max_bits;

	max_index = list_size(stack) -1;
	max_bits = 0;
	while ((max_index >> max_bits) != 0)
	{
		max_bits++;
	}
	return (max_bits);
}

int	list_size(t_elem *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

void	radix_sort(t_elem **a, t_elem **b)
{
	int		i;
	int		size;
	int		j;
	t_elem	*current;

	i = 0;
	while (i < get_max_bits(*a))
	{
		j = 0;
		size = list_size(*a);
		current = *a;
		while (j < size)
		{
			if (((current->index >> i) & 1) == 0)
				pb(b, a);
			else
				ra(a);
			current = *a;
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
