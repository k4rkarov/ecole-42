/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:48:38 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/12 20:51:18 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
	while (size != '\0')
	{
		write(1, tab, 1);
		tab++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int size;
// 	int vet[] = {1,2,3,4,5,6};
// 	size = sizeof(vet) / sizeof(int);
// 	ft_rev_int_tab(vet, size);
// 	return(0);
// }