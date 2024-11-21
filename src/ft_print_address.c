/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:18:21 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/13 14:26:03 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	ft_putnbr_hex(unsigned long n)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16);
	}
	ft_print_char(symbols[n % 16]);
}

int	ft_print_address(unsigned long address)
{
	int				counter;
	unsigned long	temp;
	int				hex_length;

	if (!address)
		return (ft_print_str("(nil)"));
	counter = 0;
	counter += ft_print_str("0x");
	if (!address)
		counter += ft_print_str("0");
	else
	{
		ft_putnbr_hex(address);
		temp = address;
		hex_length = 0;
		while (temp > 0)
		{
			hex_length++;
			temp /= 16;
		}
		counter += hex_length;
	}
	return (counter);
}
