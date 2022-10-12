/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:32:32 by rleslie-          #+#    #+#             */
/*   Updated: 2022/10/06 22:19:59 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_putnbr(int n);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_format(va_list args, char format);
int ft_putnbr_u(unsigned int n);
int ft_hex(unsigned int n, int j);
int ft_ptr(long n, int j);
int	ft_printf(const char *ptr, ...);
int	ft_size(int n);
size_t	ft_strlen(const char *s);

# endif