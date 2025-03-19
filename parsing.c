/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:03:56 by yasmin            #+#    #+#             */
/*   Updated: 2025/03/19 15:01:53 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_parsing(t_elem **stack, int argc, char **argv)
{
	char	**new_stack;
	int		i;
	int		result;
	int		j;

	i = 1;
	result = 0;
	j = 0;
	new_stack = argv;
	if (argc < 2)
		return (0);
	if (argc == 2 && !countain_space(argv[1]))
	{
		new_stack = ft_split(argv[1], ' ');
		i = 0;
	}
	result = build_stack(stack, new_stack, i);
	if (new_stack != argv)
	{
		while (new_stack[j])
			free(new_stack[j++]);
		free(new_stack);
	}
	return (result);
}

int	build_stack(t_elem **stack, char **new_stack, int i)
{
	int	n;

	n = 0;
	while (new_stack[i])
	{
		if (dont_is_number(new_stack[i]))
		{
			free_list(stack);
			return (1);
		}
		n = ft_atoi(new_stack[i]);
		add_elem(stack, create_elem(n));
		if (check_duplicate(stack))
		{
			free_list(stack);
			return (1);
		}
		i++;
	}
	return (0);
}

int	dont_is_number(char *str)
{
	int		i;
	long	n;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
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
	while (current->next != NULL)
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
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}
