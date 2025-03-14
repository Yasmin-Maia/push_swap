/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:25:04 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/03/05 18:59:37 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/* 
#include <stdlib.h>

int	main(void)
{
	char 	*s;
	char 	*e;

	s = "546:5";
	e = "-4886";
	ft_atoi(s);
	printf("ft_atoi: %s\n", s);
	ft_atoi(e);
	printf("ft_atoi: %s\n", e);
	atoi(s);
	printf("atoi: %s\n", s);
	atoi(e);
	printf("atoi: %s\n", e);
	return (0);
} */