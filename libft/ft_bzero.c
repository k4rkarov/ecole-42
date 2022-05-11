/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:32:05 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/06 21:47:54 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	while (n >= 0)
	{
		((char *)s)[n] = 0;
		n--;
	}
}

/*#include <stdio.h>
int main(void)
{
	char str1[] = "casa";
	printf("%s", str1);
	ft_bzero(str1, 5);
	printf("%s", str1);
	
	int i = 0;
	while (i < 5)
	{
		printf("%d", str1[i]);
		i++;
	}
}*/
