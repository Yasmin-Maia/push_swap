/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:03:43 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/14 16:06:48 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "push_swap.h"

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
		return (1);
	while(str[i])
	{
		if(!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	n = ft_atol(str);
	if (n > INT_MAX || n < INT_MIN)
		return (1);
	return (0);
}
int	check_duplicate(t_elem **stack)
{
	t_elem	*current;
	t_elem	*checker;

	if (!(*stack) || (*stack)->next == *stack)
		return (0);	
	current = *stack;
	while(current->next != NULL)
	{
		checker = current->next;
		while (checker != NULL)
		{
			if (current->num == checker->num)
				return (1);
			checker = checker->next;
		}
		current = current->next;
	}
	return (0);
}

int	countain_space(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == ' ')
			return (0);
		i++;
	}
	return (1);
} */