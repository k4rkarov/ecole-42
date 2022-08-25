/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:58:57 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/29 18:05:06 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countdigits_hex(unsigned long long res)
{
	int	counter;

	counter = 0;
	if (res == 0)
		return (1);
	while (res > 0)
	{
		res = res / 16;
		counter++;
	}
	return (counter);
}

int	ft_hex_converter(unsigned long long n, int b)
{
	int	i;

	i = 0;
	if (n > 15)
		ft_hex_converter(n / 16, b);
	if (n % 16 < 10)
		i += ft_putchar(n % 16 + '0');
	else
		i += ft_putchar(n % 16 + b);
	return (ft_countdigits_hex(n));
}
