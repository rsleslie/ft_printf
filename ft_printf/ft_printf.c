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
#include <unistd.h>
#include <stdio.h>

void	ft_printf(const char* ptr, ...)
{
	va_list args;
	int i;
	int x;
	char *days[7];

	va_start(args, ptr);
	x = 0;
	while(*ptr != '\0')
	{
		days[x] = va_arg(args, char *);
		i = 0;
		while (days[x][i] != '\0')
		{
			write(1, &days[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		ptr++;

	}
	va_end(args);
}

int main()
{
	ft_printf("sat");
	printf("sf\n");
}
