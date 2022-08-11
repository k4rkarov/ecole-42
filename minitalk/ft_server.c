/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:36:38 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/11 20:49:25 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

int	power(int n, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	if (power == 0)
        return (1);
	else
        while (i != power)
        {
            res = res * n;
            i++;
		}
	printf("%d\n", res);
    return (res);
}

void	received_sig(int sig)
{
	static int				i;
	static unsigned char	str;

	i = 7;
	if (sig == SIGUSR1)
	{
		//printf("1\n");
		str = str + power(2, i);
	}
	else	
		//printf("0\n");
	i--;

	if (i < 0)
	{
		ft_putchar_fd(str, 1);
		i = 7;
		str = 0;
	}
}

int main(void)
{
	struct	sigaction sa;

	sa.sa_handler = &received_sig;
	sa.sa_flags = SA_RESTART;
	printf("Server PID: %d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
	return (0);
}
