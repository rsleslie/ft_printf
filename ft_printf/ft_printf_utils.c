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

void	ft_putnbr(int n)
{
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
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
