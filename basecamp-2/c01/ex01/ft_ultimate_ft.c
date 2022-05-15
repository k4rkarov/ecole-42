/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:52:30 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/13 01:09:35 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	*********(nbr) = 42;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*ptr1;
// 	int	**ptr2;
// 	int	***ptr3;
// 	int	****ptr4;
// 	int	*****ptr5;
// 	int	******ptr6;
// 	int	*******ptr7;
// 	int	********ptr8;
// 	int	number;
// 	number = 179;
// 	ptr1 = &number;
// 	ptr2 = &ptr1;
// 	ptr3 = &ptr2;
// 	ptr4 = &ptr3;
// 	ptr5 = &ptr4;
// 	ptr6 = &ptr5;
// 	ptr7 = &ptr6;
// 	ptr8 = &ptr7;
// 	ft_ultimate_ft(&ptr8);
// 	printf("%d\n", number);
// 	return (0);
// }