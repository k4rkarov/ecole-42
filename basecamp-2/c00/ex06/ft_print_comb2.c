/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:30:45 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/12 20:53:09 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_ccount(int a);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_ccount(a);
			write(1, " ", 1);
			ft_ccount(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }

void	ft_ccount(int a)
{
	int	c;

	c = a / 10;
	c = c + '0';
	write(1, &c, 1);
	c = a % 10;
	c = c + '0';
	write(1, &c, 1);
}
