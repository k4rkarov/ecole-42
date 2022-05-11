/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:41:09 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/09 16:59:41 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle)
{
	int	count1;
	int	count2;

	if (*needle == 0)
		return ((char *)haystack);
	count1 = 0;
	while (haystack[count1] != '\0')
	{
		count2 = 0;
		while (haystack[count1 + count2] == needle[count2])
		{
			count2++;
			if (needle[count2] == 0)
				return ((char *)&haystack[count1]);
		}
		count1++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	const char string1[] = "avada kedavra";
	const char string2[] = "avada";
	printf("%s\n", ft_strnstr(string1, string2));
	return(0);
}*/
