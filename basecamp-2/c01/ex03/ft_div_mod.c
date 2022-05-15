/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:57:55 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/11 03:36:09 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a;
// 	int b;
// 	int c;
// 	int d;
// 	a = 42;
// 	b = 4;
// 	ft_div_mod(a, b, &c, &d);
// 	printf("%d, %d\n", c, d);
// 	return(0);
// }