/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:46:30 by yasmin            #+#    #+#             */
/*   Updated: 2025/02/26 18:14:21 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_elem **stack, char c)
{
	t_elem 	*current;

	if (!stack || !*stack)
		return ;
	current = *stack;
	if (c == 'a')
		ft_printf("STACK A:\t");
	else if (c == 'b')
		ft_printf("STACK B:\t");
	else
		ft_printf("%c:\t", c);
	while (current != NULL)
	{
		ft_printf("| %d ", current->num);
		current = current->next;
	}
	ft_printf("\n");
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
	if(list_size(a) == 2 && !is_sorted(a))
		sa(&a);
	else if(list_size(a) == 3)
		sort_three(&a);
	else if(list_size(a) == 4)
		sort_four(&a, &b);
	else if(list_size(a) == 5)
		sort_five(&a, &b);
	else
		radix_sort(&a, &b);
	print_stack(&a, 'a');
	free_list(a);
	free_list(b);
	return (0);
}
