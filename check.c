/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:03:43 by yasmin            #+#    #+#             */
/*   Updated: 2025/02/21 17:37:26 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg(int ac, char **av, t_elem **a)
{
	int	i;
	int	num;

	num = 0;
	if(ac == 2)
		av = split_arg(av[1], &ac, &num, &i);
	else
		i = 1;
	while(i < ac)
	{
		if(!is_number(av[i]) || check_duplicate(*a, ft_atoi(av[i])))
		{
			if(num)
				free_argv(av);
			return (0);
		}
		add_elem(a, create_elem(ft_atoi(av[i])));
		i++;
	}
	if(num)
		free_argv(av);
	return (1);
}

char	**split_arg(char *str, int *ac, int *num, int *i)
{
	char	**av;

	av = ft_split(str, ' ');
	*ac = 0;
	while(av[*ac])
		(*ac)++;
	*num = 1;
	*i = 0;
	return (av);
}

int	is_number(char *str)
{
	int i;

	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i++;
	if(!str[i])
		return (0);
	while(str[i])
	{
		if(!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
int	check_duplicate(t_elem *stack, int num)
{
	while(stack)
	{
		if(stack->num == num)
			return (1);
		stack = stack->next;
	}
	return (0);
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