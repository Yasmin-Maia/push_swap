/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:47:34 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/26 15:48:37 by ymaia-do         ###   ########.fr       */
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
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->index > second && (*a)->index < third)
		sa(a);
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
	if (is_sorted(a))
		pa(a, b);
	else
	{
		sort_three(a);
		pa(a, b);
	}
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
	if (is_sorted(a))
	{
		pa(a, b);
		pa(a, b);
	}
	else
	{
		sort_three(a);
		pa(a, b);
		pa(a, b);
	}
}
