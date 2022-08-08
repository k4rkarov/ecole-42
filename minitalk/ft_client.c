/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:46:03 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/08 15:16:35 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

int	ft_client(void)
{
	int pid = fork();
	if (pid == -1)
		return (1);
	if (pid == 0)
	{
		while (1)
		{
			printf("Some output\n");
			usleep(50000);
		}
	}
	else
	{
		kill(pid, SIGSTOP);

		int t;
		do 
		{
			printf("Time in seconds for execution: ");
			scanf("%d", &t);
			if (t > 0)
			{
				kill(pid, SIGCONT);
				sleep(t);
				kill(pid, SIGSTOP);
			}
		} while (t > 0);
		
		kill(pid, SIGKILL);
		wait(NULL);
	}
	return (0);
}

int	main(void)
{
	ft_client();
	return (0);
}
