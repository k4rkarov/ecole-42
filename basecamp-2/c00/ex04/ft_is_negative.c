/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:32:12 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/12 20:52:36 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	nn;
	char	pp;

	nn = 'N';
	pp = 'P';
	if (n < 0)
		write(1, &nn, 1);
	else if (n >= 0)
		write(1, &pp, 1);
}

// int	main(void)
// {
// 	ft_is_negative(0);
// 	return (0);
// }
