/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:13:59 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/22 19:21:23 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

static int	ft_countdigits(unsigned int res)
{
	int	counter;

	counter = 0;
	while (res > 0)
	{
		res = res / 10;
		counter++;
	}
	return (counter);
}

static int ft_putnbr_u(unsigned int n)
{
	unsigned int aux;

	aux = n;
	if (n > 9)
		ft_putnbr_u(n / 10);

	ft_putchar_fd(n % 10 + '0', 1);
	return(ft_countdigits(aux));
}

static int	ft_hex_converter (unsigned long long n, int b)
{
	int i;

	i = 0;
	if (n > 15)
		ft_hex_converter(n / 16, b);
	if (n % 16 < 10)
		i = ft_putchar_fd(n % 16 + '0', 1);
	else
		i = ft_putchar_fd(n % 16 + b, 1);
	return (i);
}

int	ft_printf(const char *beg, ...)
{
	va_list list;
	int i;
	int y;

	i = 0;
	y = 0;
	va_start(list, beg);
	while (beg[i])
	{
		if (beg[i] == '%' && ft_strchr("cspdiuxX%", beg[i + 1]))
		{
			if (beg[i + 1] == 'c')
				y += ft_putchar_fd(va_arg(list, int), 1);
			if (beg[i + 1] == 's')
				y += ft_putstr_fd(va_arg(list, char *), 1);
			if (beg[i + 1] == 'p')
				y += ft_hex_converter(va_arg(list, unsigned long long), 87);	
			if (beg[i + 1] == 'd')
				y += ft_putnbr_fd(va_arg(list, int), 1);
			if (beg[i + 1] == 'i')
				y += ft_putnbr_fd(va_arg(list, int), 1);
			if (beg[i + 1] == 'u')
				y += ft_putnbr_u(va_arg(list, int));
			if (beg[i + 1] == 'x')
				y += ft_hex_converter(va_arg(list, unsigned int), 87);	
			if (beg[i + 1] == 'X')
				y += ft_hex_converter(va_arg(list, unsigned int), 55);	
			if (beg[i + 1] == '%')
				y += ft_putchar_fd('%', 1);
			i++;
		}
		else
			y += ft_putchar_fd(beg[i], 1);
		i++;
	}
	va_end(list);
	return (y);
}

#include <stdio.h>
int main (void)
{
	int i = 554;

	ft_printf("%d\n", i);
}
