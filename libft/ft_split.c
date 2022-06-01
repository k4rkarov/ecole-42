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
    size_t	i;
    char	*str;
    char	**ret;
    size_t	nsep;
    size_t	iret;

    nsep = 0;
    i = 0;
    str = ft_strdup(s);
    while(str[i])
    {
        if (str[i] == c)
        {
            nsep++;
            str[i] = 0;
        }
        i++;
    }
    ret = (char **)malloc((nsep + 2) * sizeof(char *));
    if (ret == NULL)
        return (ret);
    ret = &str;
    i = 0;
    iret = 1;
    while (i < ft_strlen(s))
    {
        if (str[i] == 0)
        {
            ret[iret] = &str[i + 1];
            iret++;
        }
        i++;
    }
    ret[iret] = NULL;
    return (ret);
}

#include <stdio.h>
int main(void)
{
    char test[] = "./a t1";
    char sep = ' ';
    char **ret;

    ret = ft_split(test, sep);
    while(*ret)
    {
        printf("%s\n", *ret++);
    }
}
