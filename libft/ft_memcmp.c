/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:50:24 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/11 21:05:21 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	x;
	const char		*s11;
	const char		*s22;

	s11 = s1;
	s22 = s2;
	if (n == 0)
		return (0);
	x = 0;
	while (s11[x] && s22[x] && (s11[x] == s22[x]) && x < n)
	{
		x++;
	}
	if (x == n)
		return (s11[x - 1] - s22[x - 1]);
	return (s11[x] - s22[x]);
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
