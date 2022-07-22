/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:29:57 by ide-frei          #+#    #+#             */
/*   Updated: 2022/07/20 16:29:40 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft(int *i)
{
	*i = 1;

	printf("valor em ft() = %d\n", *i);
}

int main (void)
{
	static int fernandinha = 0;
	int iguin = 0;

	printf("%d\n", fernandinha);
	printf("%d\n", iguin);
	ft(&fernandinha);
	ft(&iguin);
	printf("%d\n", fernandinha);
	printf("%d\n", iguin);
}
		
