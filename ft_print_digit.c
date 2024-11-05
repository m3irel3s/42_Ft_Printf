/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:03:29 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/05 21:45:13 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(long nb, int base, char c)
{
	int		counter;
	char	*symbols;

	counter = 0;
	symbols = "0123456789abcdef";
	if (c == 'X')
		symbols = "0123456789ABCDEF";
	if (nb < 0)
	{
		ft_print_char('-');
		return (ft_print_digit(-nb, base, c) + 1);
	}
	else if (nb < base)
		return (ft_print_char(symbols[nb]));
	else
	{
		counter = ft_print_digit(nb / base, base, c);
		return (counter + ft_print_digit(nb % base, base, c));
	}
}
int	ft_print_unsigned(unsigned int nb)
{
	int		counter;
	char	*symbols;

	counter = 0;
	symbols = "0123456789";

	if (nb < 10)
		counter += ft_print_char(symbols[nb]);
	else
	{
		counter += ft_print_unsigned(nb / 10);
		counter += ft_print_char(symbols[nb % 10]);
	}
	return (counter);
}
