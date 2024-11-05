/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:43:09 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/05 21:49:19 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void test_char(void);
void test_str(void);

int	main(void)
{
	ft_printf("ft_printf: %p %p \n", 0, 0);
	printf("printf: %p %p \n", 0, 0);
}