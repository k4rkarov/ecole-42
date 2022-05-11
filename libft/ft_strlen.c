/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:17:51 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/04 19:31:34 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

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
	printf("%i\n", ft_strlen(str));
	return(0);
}*/
