/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:52:27 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/05 15:05:42 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += ft_print_char(va_arg(args, int));
	else if (c == '%')
		counter += ft_print_char('%');
	else if (c == 's')
		counter += ft_print_str(va_arg(args, char *));
	else if (c == 'd' || c == 'i' || c == 'u')
		counter += ft_print_digit((long)va_arg(args, int), 10, 'd');
	else if (c == 'x')
		counter += ft_print_digit((long)(va_arg(args, unsigned int)), 16, 'x');
	else if (c == 'X')
		counter += ft_print_digit((long)(va_arg(args, unsigned int)), 16, 'X');
	else if (c == 'p')
		counter += ft_print_address((unsigned long)va_arg(args, void *));
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;

	va_start(args, format);
	counter = 0;
	while (*format)
	{
		if (*format == '%')
			counter += ft_print_format(*(++format), args);
		else
			counter += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (counter);
}
