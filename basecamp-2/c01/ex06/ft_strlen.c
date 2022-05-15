/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:32:05 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/11 04:48:20 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str != '\0')
	{
		str++;
		x++;
	}
	return (x);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int y;
// 	char str[] = "sapato\n";
// 	y = ft_strlen(str);
// 	printf("%i\n", y);
// 	return(0);
// }