/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:08:01 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/01 18:34:00 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    char	**ret;
    size_t	i;
    size_t	nsep;
    size_t	start;
    size_t  y;

    nsep = 0;
    i = 0;
    y = 0;
    while(s[i])
    {
        if (s[i] == c)
        {
            nsep++;
        }
        i++;
    }
    ret = malloc((nsep + 1) * sizeof(char *));
    if (ret == NULL)
        free(ret);
        return (ret);
    i = 0;
    start = 0;
    while (i < ft_strlen(s))
    {
        if (s[i] == c)
        {
            ret[y] = ft_substr(s, start, i - start);
            start = i + 1;
            y++;
        }
        i++;
    }
    return (ret);
}

/* #include <stdio.h>
int main(void)
{
    char test[] = "ola mundo blz";
    char sep = ' ';
    char **ret;

    ret = ft_split(test, sep);
    while(*ret)
    {
        printf("%s\n", *ret++);
    }
} */