/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:41:09 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/18 16:15:03 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count1;
	size_t	count2;

	if (*needle == 0)
		return ((char *)haystack);
	count1 = 0;
	while (haystack[count1] != '\0' && count1 <= len)
	{
		count2 = 0;
		while (haystack[count1 + count2] == needle[count2])
		{
			if (needle[count2 + 1] == '\0')
				return ((char *)&haystack[count1]);
			count2++;
		}
		count1++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	const char string1[] = "avada kedavra xabalblau";
	const char string2[] = "kedavra";
	printf("%s\n", ft_strnstr(string1, string2, 13));
	printf("%s\n", strnstr(string1, string2, 13));
	return(0);
}
