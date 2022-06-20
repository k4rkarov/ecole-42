/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:13:59 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/20 14:41:40 by ide-frei         ###   ########.fr       */
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

hex_converter ()
{
	
}

int	ft_printf(const char *beg, ...)
{
	va_list list;
	int i;

	i = 0;
	va_start(list, beg);
	while (beg[i])
	{
		if (beg[i] == '%' && ft_strchr("cspdiuxX%", beg[i + 1]))
		{
			if (beg[i + 1] == 'c')
				ft_putchar_fd(va_arg(list, int), 1);
			if (beg[i + 1] == 's')
				ft_putstr_fd(va_arg(list, char *), 1);
			//if (beg[i + 1] == 'p')
				
			if (beg[i + 1] == 'd')
				ft_putnbr_fd(va_arg(list, int), 1);
			if (beg[i + 1] == 'i')
				ft_putnbr_fd(va_arg(list, int), 1);
			if (beg[i + 1] == 'u')
				ft_putnbr_u(va_arg(list, int));
			//if (beg[i + 1] == 'x')
			//if (beg[i + 1] == 'X')
			if (beg[i + 1] == '%')
				ft_putchar_fd('%', 1);
			i++;
		}
		else
			ft_putchar_fd(beg[i], 1);
		i++;
	}
	return (i);
}

int main (void)
{
	char c = 'c';
	char *ch = "char";
	int i = 12;
	unsigned int y = 123;
	
	ft_printf("char = %c\n string = %s\n intd = %d\n inti = %i\n unsigned = %u\n percent = %%\n", c, ch, i, i, y);
}
