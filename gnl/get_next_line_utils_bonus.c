/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:29:57 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/01 15:31:53 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str != (char)c && *str != '\0')
		str++;
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*temp_s;
	int		len;

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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pd;
	char	*ps;

	pd = (char *)dest;
	ps = (char *)src;
	if (n == 0)
		return (dest);
	if (ps < pd)
	{
		while (n--)
			pd[n] = ps[n];
		return (dest);
	}
	ft_memcpy(pd, ps, n);
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (!dest && !src && n > 0)
		return (NULL);
	while (n > 0)
	{
		*pd++ = *ps++;
		n--;
	}
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*temp_s;

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
