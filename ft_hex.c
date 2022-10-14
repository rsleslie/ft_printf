/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:40:59 by rleslie-          #+#    #+#             */
/*   Updated: 2022/10/13 22:43:39 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int n, int j, int x, int i)
{
	char	div[17];

	x = 0;
	if (n == 0)
	{
		div[x] = '0';
		x++;
	}
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
	while (x != 0)
	{	
		x--;
		ft_putchar(div[x]);
	}
	return (ft_strlen(div));
}
