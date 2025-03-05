/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   neutralize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:47:34 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/05 18:59:37 by yasmin           ###   ########.fr       */
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
