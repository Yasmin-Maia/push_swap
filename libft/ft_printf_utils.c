/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:59:49 by yasmin            #+#    #+#             */
/*   Updated: 2025/01/09 16:31:30 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	int count;

	count = write (1, &c, 1);
	return (count);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if(str == NULL)
		return (ft_putstr("(null)"));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	long	n;
	int		count;
	
	count = 0;
	n = nb;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
	}
	count += ft_putchar(n % 10 + '0');
	return (count);
} 

int	puthex(unsigned long long number, char def)
{
	int		i;
	char	*base;

	i = 0;
	if (def == 'x')
		base = "0123456789abcdef";
	else if (def == 'X')
		base = "0123456789ABCDEF";
	if (number == 0)
		return (ft_putchar ('0'));
	if (number >= 16)
		i += puthex((unsigned long long)number / 16, def);
	i += ft_putchar(base[number % 16]);
	return (i);
}



