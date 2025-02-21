/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:46:30 by yasmin            #+#    #+#             */
/*   Updated: 2025/02/21 19:35:08 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_elem *list)
{
	t_elem	*temp;

	while(list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}

int	main(int ac, char **av)
{
	t_elem *a;
	t_elem	*b;

	if(ac < 2)
		return (1);
	a = NULL;
	b = NULL;
	if(ac == 2 && av[1][0] == '\0')
		return (1);
	if(!check_arg(ac, av, &a))
	{
		ft_printf("Error\n");
		return (1);
	}
	if(is_sorted(a))
		return (0);
	if(list_size(a) == 2)
		sa(&a);
	else if(list_size(a) == 3)
		sort_three(&a);
	else if(list_size(a) == 5)
		sort_five(&a, &b);
	else
		radix_sort(&a, &b);
	free_list(a);
	free_list(b);
	return (0);
}