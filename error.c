/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:39:04 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/18 18:30:10 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_check(t_elem **stack)
{
	if (stack)
		free_list(stack);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_list(t_elem **list)
{
	t_elem	*temp;

	if (!list || !*list)
		return ;
	while (*list)
	{
		temp = (*list)->next;
		free(*list);
		*list = temp;
	}
}
