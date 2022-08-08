/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:36:38 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/08 17:02:03 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	handle_sigtstp(int sig)
{
	printf("Stop not allowed, nice try mate\n");
}

void	handle_sigcont(int sig)
{
	printf("Input number: ");
	fflush(stdout);
}

int	ft_server(void)
{
	struct sigaction sa;
	//sa.sa_handler = &handle_sigtstp;
	sa.sa_handler = &handle_sigcont;
	sa.sa_flags = SA_RESTART;
	//sigaction(SIGTSTP, &sa, NULL);
	sigaction(SIGCONT, &sa, NULL);
	int x;
	
	printf("Input number: ");
	scanf("%d", &x);
	printf("Result %d * 5 = %d\n", x, x * 5);	
	return (0);
}

int main(void)
{
	ft_server();
	return (0);
}
