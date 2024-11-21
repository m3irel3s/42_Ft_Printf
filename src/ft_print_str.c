/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:09:34 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/05 21:46:29 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_str(char *str)
{
	int	counter;

	if (!str)
		return (ft_print_str("(null)"));
	counter = 0;
	while (*str)
	{
		ft_print_char((int) *str);
		str++;
		counter++;
	}
	return (counter);
}
