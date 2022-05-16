/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:16:10 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/12 17:54:29 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len;

	len = ft_strlen((char *)s1);
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, len);
	return (dst);
}

/*#include <stdio.h>
int main (void)
{
 	char ori[14] = "Avada Kedavra";
    char *dup;
    int o_len,d_len;

    dup = ft_strdup(ori);
    o_len = ft_strlen(ori);
    d_len = ft_strlen(dup);

    printf("Original: '%s' (%d)\n", ori,o_len);
    printf("Duplicate: '%s' (%d)\n", dup,d_len);

    return (0);	
}*/
