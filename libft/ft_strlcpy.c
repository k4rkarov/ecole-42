/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:18:50 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/18 17:14:04 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;

	if (dstsize == 0)
		return (ft_strlen((char *)src));
	count = 0;
	while ((src[count]) && (count < dstsize))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (ft_strlen((char *)src));
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*origin = "avadaKedavra";
	char	destiny[15];
	printf("%zu\n", ft_strlcpy(destiny, origin, 0));
	printf("%zu\n", strlcpy(destiny, origin, 0));	
	return (0);
}*/
