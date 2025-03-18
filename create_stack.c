/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:59 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/18 17:50:56 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem *create_elem(int num)
{
	t_elem	*node;
	
	node = malloc(sizeof(t_elem));
	if (!node)
		return (NULL);
	node->num = num;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	add_elem(t_elem **stack, t_elem *new)
{
	t_elem	*temp;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

