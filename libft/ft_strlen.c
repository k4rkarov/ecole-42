/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:17:51 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/11 21:07:53 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	x;

	x = 0;
	while (*str)
	{
		str++;
		x++;
	}
	return (x);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "hello world!\n";
	printf("%zu\n", ft_strlen(str));
	return(0);
}*/
