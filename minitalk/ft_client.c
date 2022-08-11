/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:46:03 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/11 19:30:35 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

int main(int argc, char **argv)
{
	int 	i = 7;
	int		index = 0;
	char	*msg;

	(void)argc;
	msg = argv[2];
	while (msg[index])
	{
		while (i >= 0)
		{
			if (msg[index] & (1 << i))
				kill(atoi(argv[1]), SIGUSR1);
			else
				kill(atoi(argv[1]), SIGUSR2);
			usleep(200);
			i--;
		}
		index++;
		i = 7;
	}
}
