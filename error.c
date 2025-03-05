/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:39:04 by yasmin            #+#    #+#             */
/*   Updated: 2025/02/26 18:33:14 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_check(t_elem **stack)
{
	if (stack)
		free_list(*stack);
	write(2, "error\n", 6);
	exit(1);
}

void	free_list(t_elem *list)
{
	t_elem	*temp;

	while(list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
	list = NULL;
}

void	free_argv(char **argv)
{
	int i;

	i = 0;
	while(argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}