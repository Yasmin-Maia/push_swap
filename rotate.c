/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:30:48 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/03/12 17:08:31 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_elem **a)
{
	t_elem	*temp;
	t_elem	*last;

	if(!(*a) || !((*a)->next))
		return;
	temp = *a;
	*a = (*a)->next;
	last = *a;
	while(last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_elem **b)
{
	t_elem	*temp;
	t_elem	*last;

	if(!(*b) || !((*b)->next))
		return;
	temp = *b;
	*b = (*b)->next;
	last = *b;
	while(last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	ft_printf("rb\n");
}

void	ra_no_print(t_elem **a)
{
	t_elem	*temp;
	t_elem	*last;

	if(!(*a) || !((*a)->next))
		return;
	temp = *a;
	*a = (*a)->next;
	last = *a;
	while(last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
}

void	rb_no_print(t_elem **b)
{
	t_elem	*temp;
	t_elem	*last;

	if(!(*b) || !((*b)->next))
		return;
	temp = *b;
	*b = (*b)->next;
	last = *b;
	while(last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
}

void	rr(t_elem **a, t_elem **b)
{
	ra_no_print(a);
	rb_no_print(b);
	ft_printf("rr\n");
}
