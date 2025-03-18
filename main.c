/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:46:30 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/18 17:30:23 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_elem **a, t_elem **b)
{
	if(list_size(*a) == 2)
		sa(a);
	else if(list_size(*a) == 3)
		sort_three(a);
	else if(list_size(*a) == 4)
		sort_four(a, b);
	else if(list_size(*a) == 5)
		sort_five(a, b);
	else
		radix_sort(a, b);
}

int	main(int ac, char **av)
{
	t_elem *a;
	t_elem	*b;

	a = NULL;
	b = NULL;
	if(ac == 1 || (ac == 2 && !av[1][0]))
		exit (1);
	if (ft_parsing(&a, ac, av) || av[1] == NULL)
		error_check(&a);
	if (is_sorted(&a))
	{
		free_list(&a);
		return (0);
	}
	neutralize(&a);
	sorting(&a, &b);
	free_list(&a);
	free_list(&b);
	return (0);
}
