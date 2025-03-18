/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:22:43 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/03/18 17:33:00 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_elem **a)
{
	t_elem	*temp;
	
	if(*a && (*a)->next)
	{
		temp = (*a)->next;
		(*a)->next = temp->next;
		temp->next = *a;
		*a = temp;
		ft_printf("sa\n");
	}	
}

void	sb(t_elem **b)
{
	t_elem	*temp;
	
	if(*b && (*b)->next)
	{
		temp = (*b)->next;
		(*b)->next = temp->next;
		temp->next = *b;
		*b = temp;
		ft_printf("sb\n");
	}	
}

void	sa_no_print(t_elem **a)
{
	t_elem	*temp;
	
	if(*a && (*a)->next)
	{
		temp = (*a)->next;
		(*a)->next = temp->next;
		temp->next = *a;
		*a = temp;
	}	
}

void	sb_no_print(t_elem **b)
{
	t_elem	*temp;
	
	if(*b && (*b)->next)
	{
		temp = (*b)->next;
		(*b)->next = temp->next;
		temp->next = *b;
		*b = temp;
	}	
}

void	ss(t_elem **a, t_elem **b)
{
	sa_no_print(a);
	sb_no_print(b);
	ft_printf("ss\n");
}
