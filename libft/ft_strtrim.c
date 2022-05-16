/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:15:30 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/16 15:25:16 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (str1[count])
	{
		str1[count] = s1[count];
		count++;
	}
	strset[count2] = str1[count];
	strset[count2] = '\0';
	return (strset);

}

#include <stdio.h>
int main (void)
{
	char *str1 = ":  +avada kedavra+  :";
	char *str2 = "+"; 

	printf("%s\n", ft_strtrim(str1, str2));

	return (0);	
}
