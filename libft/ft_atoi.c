/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:31:23 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/27 16:20:31 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(const char *str);
static int	ft_catnbr(const char *str);

static int	ft_catnbr(const char *str)
{
	int	counter;
	int	res;

	counter = 0;
	res = 0;
	while (str[counter] >= '0' && str[counter] <= '9' && str[counter] != 0)
	{
		res = res * 10 + (str[counter] - '0');
		counter++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int	count;
	int	res;

	count = 0;
	while (str[count] && (str[count] == ' ' \
		|| (str[count] >= '\t' && str[count] <= '\r')))
		count++;
	if (str[count] == '-' || str[count] == '+')
		count++;
	res = ft_catnbr(str + count);
	if (str[count - 1] == '-')
		res *= -1;
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char a[] = "    --1234sdab567";
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));
	return (0);
}*/
