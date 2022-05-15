/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:42:57 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/13 01:09:48 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	a = 4;
// 	b = 2;
// 	printf("%d%d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("%d%d\n", a, b);
// 	return (0);
// }