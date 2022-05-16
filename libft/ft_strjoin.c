/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:46:20 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/16 14:18:52 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	int		count;
	int		count2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	count = 0;
	count2 = 0;
	str1 = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (s1 == NULL)
		return (NULL);
	while (s1[count])
	{
		str1[count] = s1[count];
		count++;
	}
	while (str2[count2])
	{
		str1[count + count2] = str2[count2];
		count2++;
	}
	str1[count + count2] = '\0';
	return (str1);
}

/*#include <stdio.h>
int main (void)
{
	char *str1 = "avada kedavra";
	char *str2 = ", Mr Potter!"; 

	printf("%s\n", ft_strjoin(str1, str2));

	return (0);
}*/
