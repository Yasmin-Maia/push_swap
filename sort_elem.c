/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:47:34 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/05 19:07:09 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_elem *a)
{
	t_elem	*temp;

	temp = a;
	while(temp && temp->next)
	{
		if(temp->num > temp->next->num)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	sort_three(t_elem **a)
{
	int		second;
	int		third;

	second = (*a)->next->num;
	third = (*a)->next->next->num;
	if((*a)->num > second && second < third && (*a)->num < third)
		sa(a);
	else if((*a)->num > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if((*a)->num > second && second < third && (*a)->num > third)
		ra(a);
	else if((*a)->num < second && second > third && (*a)->num > third)
	{
		rra(a);
		sa(a);
	}
	else if((*a)->num < second && second > third && (*a)->num < third)
	{
		sa(a);
		ra(a);
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
	while(i < 2)
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
	int	max_bits;
	int i;
	int	size;
	int	j;

	max_bits = get_max_bits(*a);
	i = 0;
	size = list_size(*a);
	while(i < max_bits)
	{
		j = 0;
		while(j < size)
		{
			if((((*a)->index >> i) & 1) == 0)
				pb(b, a);
			else
				ra(a);
			j++;
		}
		while(*b)
			pa(a, b);
		i++;
	}
}