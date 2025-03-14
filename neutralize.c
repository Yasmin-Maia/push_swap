/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   neutralize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:47:34 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/14 15:25:23 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	neutralize(t_elem **stack)
{
	t_elem	*content;
	t_elem	*temp;
	int		i;

	content = *stack;
	i = 0;
	while (content)
	{
		temp = *stack;
		while (temp)
		{
			if (content->num > temp->num)
				i++;
			temp = temp->next;
		}
		content->index = i;
		i = 0;
		content = content->next; //verificar leaks
	}
}

/* void	create_chunk(t_elem **stack)
{
	t_elem	*content;
	t_elem	*temp;
	int		chunk_size;
	int		i;
	int		chunk_current;

	content = *stack;
	i = 0;
	chunk_current = 0;
	chunk_size = ((list_size(*stack) + 49) / 50);
	while (content)
	{
		temp = *stack;
		while (temp)
		{
			if (content->index > temp->index)
				i++;
			temp = temp->next;
		}
		content->chunk = i;
		i = 0;
		content = content->next; //verificar leaks
	}
}
 */