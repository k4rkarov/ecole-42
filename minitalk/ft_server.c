/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:36:38 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/15 20:17:31 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

static int	power(int power)
{
	int	i;
	int	res;
	int	n;

	res = 1;
	i = 0;
	n = 2;
	if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			res = res * n;
			i++;
		}
	}
	return (res);
}

static void	received_sig(int sig, siginfo_t *info, void *ucontext)
{
	static unsigned char	str;
	static int				i;

	(void)ucontext;	
	if (sig == SIGUSR1)
		str = str + power(7 - i);
	i++;
	if (i == 8)
	{
		ft_printf("%c", str);
		if (str == 0)
			kill(info->si_pid, SIGUSR2);
		i = 0;
		str = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = &received_sig;
	ft_printf("Server PID: %d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
	return (0);
}
