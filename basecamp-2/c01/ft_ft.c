/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:52:24 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/12 20:51:37 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*(nbr) = 42;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	number;

// 	ft_ft(&number);
// 	printf("%d\n", number);
// 	return (0);
// }
