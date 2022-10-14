/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:47:21 by rleslie-          #+#    #+#             */
/*   Updated: 2022/10/14 15:51:41 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long n, int j)
{
	char	div[32];
	int		i;
	int		x;

	x = 0;
	if (n == 0)
		return (write(1, "(nil)", 5));
	while (n != 0)
	{
		i = n % 16;
		n = n / 16;
		if (i <= 9)
			div[x] = i + '0';
		else
			div[x] = i + '7' + j;
		x++;
	}
	div[x] = '\0';
	ft_putchar_ptr(div, x);
	x = ft_strlen(div) + 2;
	return (x);
}

void	ft_putchar_ptr(char *div, int x)
{
	ft_putchar('0');
	ft_putchar('x');
	while (x != 0)
	{	
		x--;
		ft_putchar(div[x]);
	}
}
