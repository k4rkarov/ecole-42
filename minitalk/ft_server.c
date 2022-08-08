/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:36:38 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/08 20:45:50 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	received_sig(int sig)
{
	if (sig == SIGUSR1)
		printf('0');
	else
		printf('1');
}

int main (int atgc, int *argv[])
{
	int pid;

	struct sigaction sa;
	sa.sa_handler = &received_sig;
	sa.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	
	pid = getpid();
	while (1)
	{
		printf("Server PID: %d\n", pid);
		usleep(5000);
	}
}
