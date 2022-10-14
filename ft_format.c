/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:39:30 by rleslie-          #+#    #+#             */
/*   Updated: 2022/10/14 15:45:58 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format, int len)
{
	if (format == 'i' || format == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	if (format == 'u')
		len += ft_putnbr_u(va_arg(args, int));
	else if (format == '%')
		len += (ft_putchar(format));
	if (format == 'x')
		len += ft_hex(va_arg(args, int), 32, 0, 0);
	if (format == 'X')
		len += ft_hex(va_arg(args, int), 0, 0, 0);
	if (format == 'p')
		len += ft_ptr(va_arg(args, unsigned long), 32);
	return (len);
}
