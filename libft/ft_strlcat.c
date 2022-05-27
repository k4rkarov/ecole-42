/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:13:48 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/27 16:14:03 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dest;
	size_t	size_src;
	int		i;

	size_dest = 0;
	size_src = 0;
	i = 0;
	while (dst[size_dest])
		size_dest++;
	while (src[size_src])
		size_src++;
	if (dstsize == 0)
		return (size_src);
	if (size_dest >= dstsize)
		return (dstsize + size_src);
	while (src[i] && size_dest + i < (dstsize - 1))
	{
		dst[size_dest + i] = src[i];
		i++;
	}
	dst[size_dest + i] = '\0';
	return (size_dest + size_src);
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
