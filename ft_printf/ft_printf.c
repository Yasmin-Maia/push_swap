/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:22:51 by yasmin            #+#    #+#             */
/*   Updated: 2025/01/09 16:34:38 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += puthex((unsigned long long)ptr, 'x');
	return (i);
}

int	ft_putnbr_unsigned(unsigned nb)
{
	long	n;
	int		count;
	
	count = 0;
	n = nb;
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
	}
	count += ft_putchar(n % 10 + '0');
	return (count);
} 

int ft_printf(const char *format, ...)
{
	va_list args;
	int 	count;
	int 	i;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_printf_format(format[i], args);
		}
		else 
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int ft_printf_format(const char format, va_list args)
{
	int count;

	count = 0;
	if (format == 'c')
		count += ft_putchar((char)va_arg(args, int));
 	else if (format == 's')
		count += ft_putstr(va_arg(args, char*));
	else if (format == 'p')
		count += ft_putptr(va_arg(args, void*));
	else if (format == 'd')
		count += ft_putnbr((long)va_arg(args, int));
	else if (format == 'i')
		count += ft_putnbr((long)va_arg(args, int));
	else if (format == 'u')
		count += ft_putnbr_unsigned(va_arg (args, unsigned int)); 
	else if (format == 'x' || format == 'X') 
		count += puthex((long)va_arg(args, unsigned int), format);
	else if (format == '%')
		return (ft_putchar('%')); 
	return (count);
}

/* int main(void)
{
	int	a = -1;
	int	*b = &a; 

	ft_printf("%X\n", a);
	printf("%X\n", a);
	return (0);
}  */