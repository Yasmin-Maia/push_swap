/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:47:34 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/19 15:28:51 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_elem **a)
{
	t_elem	*temp;

	temp = *a;
	while (temp->next)
	{
		if (temp->num > temp->next->num)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	sort_three(t_elem **a)
{
	int		second;
	int		third;

	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if ((*a)->index < second && (*a)->index < third)
		ra(a);
	else if ((*a)->index > second && (*a)->index < third)
	{
		sa(a);
	}
	else if ((*a)->index < second && (*a)->index > third)
		rra(a);
	else if ((*a)->index > second && (*a)->index > third)
	{
		if (second < third)
			ra(a);
		if (second > third)
		{
			sa(a);
			rra(a);
		}
	}
}

void	sort_four(t_elem **a, t_elem **b)
{
	int	min;

	min = find_min(*a);
	move_to_top(a, min);
	pb(b, a);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_elem **a, t_elem **b)
{
	int	i;
	int	min;

	i = 0;
	while (i < 2)
	{
		min = find_min(*a);
		move_to_top(a, min);
		pb(b, a);
		i++;
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
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
