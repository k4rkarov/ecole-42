/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:18:50 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/23 14:41:34 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	if (dstsize == 0)
		return (ft_strlen((char *)src));
	if (ft_strlen((char *)src) + 1 < dstsize)
	{
		ft_memcpy(dst, src, ft_strlen((char *)src) + 1);
		return (ft_strlen((char*)src));
	}
	count = 0;
	while ((src[count]) && (count < dstsize))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count - 1] = '\0';
	return (ft_strlen((char *)src));
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*origin = "avada kedavra";
	char	destiny[15];
	printf("%zu\n", ft_strlcpy(destiny, origin, 13));
	char	destiny2[15];
	printf("%zu\n", strlcpy(destiny2, origin, 13));
	printf("%s\n", destiny);
	printf("%s\n", destiny2);
	return (0);
}
