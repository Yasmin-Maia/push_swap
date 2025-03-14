/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:26:46 by yasmin            #+#    #+#             */
/*   Updated: 2025/02/26 17:14:48 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_elem **b, t_elem **a)
{
	t_elem	*temp;

	if(*a == NULL)
		return;
	temp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = temp;
	ft_printf("pb\n");
}

void	pa(t_elem **a, t_elem **b)
{
	t_elem	*temp;

	if(*b == NULL)
		return;
	temp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = temp;
	ft_printf("pa\n");
}
