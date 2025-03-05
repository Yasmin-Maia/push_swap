/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:03:43 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/05 18:04:01 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*check_arg(int ac, char **av, t_elem **a)
{
	int	i;
	int	num;
	long	n;

	num = 0;
	if(ac == 2)
		av = split_arg(av[1], &ac, &num, &i);
	else
		i = 1;
	while(i < ac)
	{
		if(!is_number(av[i]))
		{
			if(num)
				free_argv(av);
			return (0);
		}
		n = ft_atoi(av[i]);
		add_elem(a, create_elem(n));
		i++;
	}
	check_duplicate(a);
	if(num)
		free_argv(av);
	return (*a);
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
	long n;

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
	n = ft_atol(str);
	if (n > INT_MAX || n < INT_MIN)
		return (0);
	return (1);
}
int	check_duplicate(t_elem **stack)
{
	t_elem	*current;
	t_elem	*checker;

	current = *stack;
	while(current->next != NULL)
	{
		checker = current->next;
		while (checker->next != NULL)
		{
			if (current->num == checker->num)
			{
				error_check(stack);
				exit(1);
			}
			checker = checker->next;
		}
		current = current->next;
	}
	return (0);
}
