/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:29:57 by ide-frei          #+#    #+#             */
/*   Updated: 2022/07/25 15:11:32 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (*str)
	{
		str++;
		x++;
	}
	return (x);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		size_s;
	size_t		size_max;

	size_max = 0;
	size_s = 0;
	if (!s)
		return (NULL);
	sub = malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (s[size_s])
	{
		if (size_s >= start && size_max < len)
		{
			sub[size_max] = (char)s[size_s];
			size_max++;
		}
		size_s++;
	}
	sub[size_max] = '\0';
	return (sub);
}

char	*ft_strchr(const char *s, int c)
{
	int		count1;
	char	let;

	let = (char)c;
	count1 = 0;
	while (s[count1])
	{
		if (s[count1] == let)
			return ((char *)&s[count1]);
		count1++;
	}
	if (let == 0)
		return ((char *)&s[count1]);
	return (0);
}

char    *ft_strdup(const char *s1)
{
    int        i;
    int        len;
    char    *temp_s;

    i = 0;
    len = ft_strlen(s1);
    if (!s1)
        return (NULL);
    temp_s = malloc(len + 1);
    if (!temp_s)
        return (NULL);
    while (s1[i])
    {
        temp_s[i] = s1[i];
        i++;
    }
    temp_s[i] = '\0';
    return (temp_s);
}

char    *ft_strjoin(char *s1, char *s2)
{
    int        i;
    int        j;
    char    *temp_s;
    int        len;

    i = 0;
    j = 0;
    if (!s1)
        s1 = ft_strdup("");
    len = ft_strlen(s1) + ft_strlen(s2);
    temp_s = malloc(len + 1);
    if (!temp_s)
        return (NULL);
    while (s1[i])
    {
        temp_s[i] = s1[i];
        i++;
    }
    while (s2[j])
        temp_s[i++] = s2[j++];
    temp_s[i] = '\0';
    free(s1);
    return (temp_s);
}
