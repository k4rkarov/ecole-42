/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:36:38 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/09 20:11:57 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

int	tochar_converter(char bin_str)
{
	int	rest;
	int	decimal;
	int base;

	base = 1;
	bin = atoi(bin_str);
	while (bin > 0)
	{
		rest = bin % 10;
		decimal = decimal + rest * base;
		bin = bin / 10;
		base = base * 2;
	}
}


int	received_sig(int sig)
{
	char *signal;
	int i;

	if (sig == SIGUSR1)
		printf("1\n");
		signal[i] = 1;
		signal++;
	else
		printf("0\n");
		signal[i] = 0;
		signal++;
	tochar_converter(signal[i]);
	return (signal[i]);
}

int ft_server(int argc, char *argv[])
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
		usleep(500000);
	}
}

int	main (void)
{
	ft_server();
	return (0);
}
