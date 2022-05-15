/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:36:53 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/12 20:49:15 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	a = 42;
// 	b = 10;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d, %d\n", a, b);
// 	return(0);
// }