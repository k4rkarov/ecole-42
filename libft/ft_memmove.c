/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:34:58 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/11 21:11:17 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tdst;
	char	*tsrc;

	tdst = dst;
	tsrc = (char *)src;
	if (tdst < tsrc)
	{
		while (len)
		{
			*tdst = *tsrc;
			tsrc++;
			tdst++;
			len--;
		}
	}
	else
	{
		tsrc += len - 1;
		tdst += len - 1;
		while (len)
		{
			*tdst = *tsrc;
			tsrc--;
			tdst--;
			len--;
		}
	}
	return (dst);
}

/*int main () {
	char dest[100] = "abra kadabra";
	char src[100] = "avada kedavra";
	printf("BF: %s\n", src);
	printf("BF: %s\n", dest);
	ft_memmove(dest, src, strlen(src));
	printf("AF: %s\n", src);
	printf("AF: %s\n", dest);

	return(0);
}*/
