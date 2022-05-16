/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:31:23 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/12 19:28:17 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str);

int	ft_catnbr(const char *str);

int	ft_catnbr(const char *str)
{
	unsigned int	counter;
	unsigned int	mult;
	int				res;

	counter = 0;
	while (str[counter] >= '0' && str[counter] <= '9' && str[counter] != 0)
			counter++;
	mult = 1;
	res = 0;
	while (counter > 0)
	{
		res += (str[counter - 1] - '0') * mult;
		mult *= 10;
		counter--;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	unsigned int	count;
	int				res;

	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
			str++;
	count = 0;
	if (*str == '-')
		count++;
	res = ft_catnbr(str);
	if (count % 2 != 0)
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
