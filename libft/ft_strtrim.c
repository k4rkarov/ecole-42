/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:15:30 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/16 20:03:30 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	char	*strset;
	int		count;
	int		count2;
	
	str1 = (char *)s1;
	strset = (char *)set;
	count = 0;
	count2 = 0;
	str1 = (char *)malloc(ft_strlen(str1) + 1);
	if (str1 == NULL)
		return (NULL);
	while (s1[count])
	{
		str1[count] = s1[count];
		if (str1[count] != strset[count2])
		{
			printf("%c\n", str1[count]);
		}
		count++;
	}
	str1[count] = '\0';
	return (str1);

}

#include <stdio.h>
int main (void)
{
	printf("%s\n", ft_strtrim("+avada+kedavra+", "+"));
}
