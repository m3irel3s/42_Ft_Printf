/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:59:21 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/05 21:46:31 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

/**
 * @brief Print a single character.
 *
 * @param c The character to be printed.
 * @return The number of characters printed (1).
 */
int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}
