/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:03:29 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/05 21:49:03 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

/**
 * @brief Recursively prints a number in a specified base and case.
 *
 * This function handles both positive and negative numbers. It prints the
 * number `nb` in the specified `base`, using either lowercase or uppercase
 * letters for bases greater than 10, based on the character `c`.
 *
 * @param nb The number to be printed.
 * @param base The base for number representation (e.g., 10 for decimal, 16 for hexadecimal).
 * @param c If 'X', uppercase letters are used for bases > 10; otherwise, lowercase.
 *
 * @return The number of characters printed.
 */
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

/**
 * @brief Prints an unsigned integer in decimal representation.
 *
 * Recursively prints an unsigned integer `nb` in decimal representation.
 *
 * @param nb The number to be printed.
 *
 * @return The number of characters printed.
 */
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
