/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:18:50 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/09 15:49:34 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>

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
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;

	count = 0;
	while ((src[count]) && (count < dstsize))
	{
		dst[count] = src[count];
		count++;
	}
	while (count < dstsize)
	{
		dst[count] = '\0';
		count++;
	}
	return (ft_strlen(dst));
}

/*#include <stdio.h>
int	main(void)
{
	char	*origin = "avadaKedavra";
	char	destiny[15];
	char	destiny1[15];

//	ft_strlcpy(destiny, origin, 6);
	printf("%zu\n", ft_strlcpy(destiny, origin, 6));
	strlcpy(destiny1, origin, 6);	
	printf("%s\n", destiny);
	return (0);
}*/
