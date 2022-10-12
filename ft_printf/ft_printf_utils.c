/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 00:05:35 by rleslie-          #+#    #+#             */
/*   Updated: 2022/10/06 22:19:00 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size(int n)
{
	int	x;
	int	i;

	i = n;
	x = 0;
	if (n <= 0)
		x = 1;
	if (n < 0)
		n *= -1;
	while (i != 0)
	{
		i = i / 10;
		x++;
	}
	return (x);
}

int	ft_putnbr(int n)
{
	int	x;

	x = ft_size(n); 
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar (n + '0');
	else
	{
		if (n > 9)
		{
			ft_putnbr(n / 10);
			n = n % 10;
		}
		ft_putchar(n + '0');
	}
	return (x);
}

int	ft_putnbr_u(unsigned int n)
{
	int	x;

	x = ft_size(n);
	if (n >= 0 && n <= 9)
		ft_putchar (n + '0');
	else
	{
		if (n > 9)
		{
			ft_putnbr(n / 10);
			n = n % 10;
		}
		ft_putchar(n + '0');
	}
	return (x);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	return(i);
}
