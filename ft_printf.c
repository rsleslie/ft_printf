/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:31:59 by rleslie-          #+#    #+#             */
/*   Updated: 2022/10/06 23:03:59 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *ptr, ...)
{
	va_list	args;
	int 	i;

	i = 0;
	va_start(args, ptr);
	while (ptr[i] != '\0')
	{
		if (ptr[i] == '%')
		{
			i++;
			ft_format(args, ptr[i]);
		}
		else
		{
			write(1, &ptr[i], 1);
		}
		i++;
	}
	va_end(args);
	return (0);
}

int	ft_format(va_list args, char format)
{
	if (format == 'i' || format == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 'u')
		return (ft_putnbr_u(va_arg(args, int)));
	else if (format == '%')
		return (ft_putchar(format));
	if (format == 'x')
		return (ft_hex(va_arg(args, int), 32));
	if (format == 'X')
		return (ft_hex(va_arg(args, int), 0));
	if (format == 'p')
		return (ft_ptr(va_arg(args, long), 32));
	return (format);
}

int	ft_hex(unsigned int n, int j)
{
	char	div[17];
	int		i;
	int		x;

	x = 0;
	while (n != 0)
	{
		i = n % 16;
		n = n / 16;
		if (i < 9)
			div[x] = i + '0';
		else
			div[x] = i + '7' + j;
		x++;
	}
	div[x] = '\0';
	while (x != 0)
	{	
		x--;
		ft_putchar(div[x]);
	}
	return (ft_strlen(div));
}

int	ft_ptr(long n, int j)
{
	char	div[17];
	int		i;
	int		x;

	x = 0;
	while (n != 0)
	{
		i = n % 16;
		n = n / 16;
		if (i < 9)
			div[x] = i + '0';
		else
			div[x] = i + '7' + j;
		x++;
	}
	div[x] = '\0';
	ft_putchar('0');
	ft_putchar('x');
	while (x != 0)
	{	
		x--;
		ft_putchar(div[x]);
	}
	return (ft_strlen(div));
}
