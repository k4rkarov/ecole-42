/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:13:48 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/18 20:43:24 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	size_dest;
	unsigned int	size_src;

	size_dest = 0;
	size_src = 0;
	while (dst[size_dest])
	{
		size_dest++;
	}
	while ((src[size_src]) && (size_src < dstsize))
	{
		dst[size_dest + size_src] = src[size_src];
		size_src++;
	}
	dst[size_dest + size_src] = '\0';
	return (ft_strlen(dst) + ft_strlen((char *)&src[size_src]));
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	destination[15] = "avada";
	char	origin[] = "kedavra";
	printf("%lu\n", ft_strlcat(destination, origin, ft_strlen(destination)));
	char	destination2[15] = "avada";
	printf("%lu\n", strlcat(destination2, origin, ft_strlen(destination2)));

	return (0);
}*/
