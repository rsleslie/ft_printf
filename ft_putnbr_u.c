/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:53:33 by rleslie-          #+#    #+#             */
/*   Updated: 2022/10/14 15:53:44 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	x;

	x = 0;
	if (n >= 0 && n <= 9)
	{
		ft_putchar (n + '0');
		x++;
	}
	else
	{
		if (n > 9)
		{
			x += ft_putnbr(n / 10);
			n = n % 10;
		}
		x += ft_putchar(n + '0');
	}
	return (x);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
