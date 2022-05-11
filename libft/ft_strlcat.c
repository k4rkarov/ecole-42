/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:13:48 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/09 14:47:00 by ide-frei         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	count2;

	count = 0;
	count2 = 0;
	while (dst[count])
	{
		count++;
	}
	while (src[count2] && count2 < dstsize)
	{
		dst[count + count2] = src[count2];
		count2++;
	}
	dst[count + count2] = '\0';
	return (ft_strlen(dst));
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	string1[15] = "avada";
	char	string2[] = "kedavra";
	printf("%zu\n", ft_strlcat(string1, string2, 13));
	char	string3[15] = "avada";
	printf("%lu\n", strlcat(string3, string2, 13));

	return (0);
}*/
