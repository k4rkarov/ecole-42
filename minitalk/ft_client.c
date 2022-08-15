/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:46:03 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/15 20:30:11 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	send_sig(int pid, char letter)
{
	int	bits;

	bits = 7;
	while (bits >= 0)
	{
		if (letter & (1 << bits))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
		bits--;
	}
	bits = 7;
}

static void	confirm_received(int sig)
{
	(void)sig;
	ft_printf("\33[1;32mMESSAGE RECEIVED!\n");
}

static int	message(int pid, char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		send_sig(pid, str[index]);
		index++;
	}
	send_sig(pid, str[index]);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*msg;
	struct sigaction	sa;

	sa.sa_handler = confirm_received;
	sigaction(SIGUSR2, &sa, NULL);
	(void)argc;
	msg = argv[2];
	if (argc == 3)
		message(ft_atoi(argv[1]), msg);
	else
	{
		ft_printf("\033[1;31mERROR! Wrong number of arguments.\n");
		return (0);
	}
	return (0);
}
