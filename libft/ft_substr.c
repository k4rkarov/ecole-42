/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:39:51 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/16 14:20:16 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(sizeof(char) * len + 1);
	while ((s[start]) && (start < len))
	{
		sub[i] = (char)s[start];
		start++;
		i++;
	}
	while (start <= len)
	{
		sub[start] = '\0';
		start++;
	}
	if (sub == NULL)
		return (NULL);
	return (sub);
}

/*#include <stdio.h>
int main (void)
{
	char *origin = "avada kedavra";
	char *duplicate;
	
	duplicate = ft_substr(origin, 6, ft_strlen(origin));
	
	printf("Dup:%s\n", duplicate);
	
	return (0);
}*/
