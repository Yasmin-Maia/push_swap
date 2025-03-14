/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:33:53 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/03/12 17:08:34 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_elem **a)
{
	t_elem	*last;
	t_elem	*second_last;

	if(!(*a) || !((*a)->next))
		return;
	second_last = *a;
	while(second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *a;
	*a = last;
	ft_printf("rra\n");
}

void	rrb(t_elem **b)
{
	t_elem	*last;
	t_elem	*second_last;

	if(!(*b) || !((*b)->next))
		return;
	second_last = *b;
	while(second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *b;
	*b = last;
	ft_printf("rrb\n");
}

void	rra_no_print(t_elem **a)
{
	t_elem	*last;
	t_elem	*second_last;

	if(!(*a) || !((*a)->next))
		return;
	second_last = *a;
	while(second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *a;
	*a = last;
}

void	rrb_no_print(t_elem **b)
{
	t_elem	*last;
	t_elem	*second_last;

	if(!(*b) || !((*b)->next))
		return;
	second_last = *b;
	while(second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *b;
	*b = last;
}

void	rrr(t_elem **a, t_elem **b)
{
	rra_no_print(a);
	rrb_no_print(b);
	ft_printf("rrr\n");
}
