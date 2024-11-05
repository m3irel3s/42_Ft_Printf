/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:18:21 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/05 15:06:02 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_hex(unsigned long n)
{
	char	hex_digit;

	if (n >= 16)
	{
		ft_putnbr_hex(n / 16);
	}
	hex_digit = "0123456789abcdef"[n % 16];
	write(1, &hex_digit, 1);
}

int	ft_print_address(unsigned long address)
{
	int				counter;
	unsigned long	temp;
	int				hex_length;

	counter = 0;
	counter += ft_print_str("0x");
	if (address == 0)
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
