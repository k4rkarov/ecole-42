/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:13:59 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/29 19:13:30 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countdigits(unsigned int res)
{
	int	counter;

	counter = 0;
	if (res == 0)
		return (1);
	while (res > 0)
	{
		res = res / 10;
		counter++;
	}
	return (counter);
}

int	ft_putnbr_u(unsigned int n)
{
	unsigned int	aux;

	aux = n;
	if (n > 9)
		ft_putnbr_u(n / 10);
	ft_putchar(n % 10 + '0');
	return (ft_countdigits(aux));
}

static int	zeroex(unsigned long long n, int b)
{
	int	i;

	i = 0;
	i = ft_putstr("0x");
	i += ft_hex_converter(n, b);
	return (i);
}

int	ft_res(int i, const char *beg, va_list list)
{
	int	y;

	y = 0;
	if (beg[i + 1] == 'c')
		y += ft_putchar(va_arg(list, int));
	if (beg[i + 1] == 's')
		y += ft_putstr(va_arg(list, char *));
	if (beg[i + 1] == 'p')
		y += zeroex(va_arg(list, unsigned long long), 87);
	if (beg[i + 1] == 'd')
		y += ft_putnbr(va_arg(list, int));
	if (beg[i + 1] == 'i')
		y += ft_putnbr(va_arg(list, int));
	if (beg[i + 1] == 'u')
		y += ft_putnbr_u(va_arg(list, int));
	if (beg[i + 1] == 'x')
		y += ft_hex_converter(va_arg(list, unsigned int), 87);
	if (beg[i + 1] == 'X')
		y += ft_hex_converter(va_arg(list, unsigned int), 55);
	if (beg[i + 1] == '%')
		y += ft_putchar('%');
	return (y);
}

int	ft_printf(const char *beg, ...)
{
	va_list	list;
	int		i;
	int		y;

	i = 0;
	y = 0;
	va_start(list, beg);
	while (beg[i])
	{
		if (beg[i] == '%' && ft_strchr("cspdiuxX%", beg[i + 1]))
		{
			y += ft_res(i, beg, list);
			i++;
		}
		else
			y += ft_putchar(beg[i]);
		i++;
	}
	va_end(list);
	return (y);
}

/* #include <stdio.h>
int main (void)
{
	int i = 554;

	ft_printf("%d\n", i);
}
 */
