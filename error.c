/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:39:04 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/06 14:48:54 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_check(t_elem **stack)
{
	if (stack)
		free_list(*stack);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_list(t_elem *list)
{
	t_elem	*temp;

	if (!list)
		return ;
	while(list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
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