/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:50:06 by ide-frei          #+#    #+#             */
/*   Updated: 2022/07/22 17:17:05 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char *get_next_line(int fd)
{
	char	*buffer;
	int		br;
	fd = open("example.txt", O_RDONLY);
	buffer = (char *)malloc(BUFFER_SIZE + 1);

	printf("%d\n", fd);
	br = read(fd, buffer, BUFFER_SIZE);
	
	printf("%d\n", br);
	printf("%s\n", buffer);
	br = read(fd, buffer, BUFFER_SIZE);
	printf("%s\n", buffer);

	return (0);
}



int main(void)
{
	get_next_line(1);
}
