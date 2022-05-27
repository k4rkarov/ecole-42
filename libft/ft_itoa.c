/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:02:29 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/27 19:29:33 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(int n)
{
	int				counter;
	unsigned int	res;

	counter = 0;
	res = 0;
	if (n < 0)
	{
		res = n * -1;
		counter++;
	}
	else
		res = n;
	while (res > 0)
	{
		res = res / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				num;
	unsigned int	i;

	i = n;
	num = ft_countdigits(n);
	str = malloc(sizeof(char) * num + 1);
	if (!str)
		return (0);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		i *= -1;
	}
	str[num] = '\0';
	while (num >= 0)
	{
		str[--num] = (i % 10) + '0';
		i = i / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	int num = -1;
	printf("%s\n", ft_itoa(num));
	return (0);
}*/
