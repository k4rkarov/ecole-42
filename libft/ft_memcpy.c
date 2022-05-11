/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:31:44 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/06 21:52:30 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n >= 0)
	{
		((char *) dst)[n] = ((char *) src)[n];
		n--;
	}
	return (dst);
}

/*#include<stdio.h>
#include<string.h>
int main () {
	char dest[20] = "abra kadabra";
	char src[] = "avada kedavra";
	printf("%s\n", dest);
	ft_memcpy(dest, src, strlen(src));
	printf("%s\n", dest);
	
	return(0);
}*/
