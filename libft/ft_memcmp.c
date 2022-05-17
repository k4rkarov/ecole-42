/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:50:24 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/16 19:30:56 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	x;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	x = 0;
	while (x < n - 1)
	{
		if (s11[x] != s22[x])
			return (s11[x] - s22[x]);
		x++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char i;
	char	string1[] = "avada kedavra";
	char	string2[] = "abra kadabra";
	i = ft_memcmp(string1, string2, 10);
	printf("%d\n", i);
	printf("%d\n", memcmp(string1, string2, 10));
	return (0);
}*/
