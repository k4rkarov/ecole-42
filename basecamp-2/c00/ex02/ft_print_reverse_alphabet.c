/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 04:11:36 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/12 20:52:01 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int	z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
