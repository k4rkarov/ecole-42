/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:46:03 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/09 19:59:20 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

int ft_client(int argc, char **argv)
{
	char c = 'a';
	int i = 7;

	while (i >= 0)
	{
		if (c & (1 << i))
		{
			kill(atoi(argv[1]), SIGUSR1);
			usleep(200);
		}
		else
		{
			kill(atoi(argv[1]), SIGUSR2);
			usleep(200);
		}
		i--;
	}
}

int	main()
{
	ft_client();
	return (0);
}
