/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:50:06 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/24 20:11:12 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (*str)
	{
		str++;
		x++;
	}
	return (x);
}

char	*get_rest(char *line)
{
	char	*final;
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 0;
	while (line[count1] && line[count1] != '\n')
		count1++;
	if (!line[count1])
	{
		free(line);
		return (NULL);
	}
	final = malloc((gnl_strlen(line) - count1 + 1) * sizeof(char));
	if (!final)
		return (NULL);
	count1++;
	while (line[count1])
		final[count2++] = line[count1++];
	final[count2] = '\0';
	free(line);
	return (final);
}

char	*get_break(char *line)
{
	char	*final;
	int		count;

	count = 0;
	if (!line[count])
		return (NULL);
	while (line[count] && line[count] != '\n')
		count++;
	final = malloc((count + 2) * sizeof(char));
	count = 0;
	while (line[count] && line[count] != '\n')
	{	
		final[count] = line[count];
		count++;
	}
	if (line[count] == '\n')
		final[count++] = '\n';
	final[count] = '\0';
	return (final);
}

char	*get_line(int fd, char *line)
{	
	char	*buffer_endline;
	int		br;

	br = 1;
	buffer_endline = malloc(BUFFER_SIZE + 1 * sizeof(char));
	while (br != 0 && !gnl_strchr(line, '\n'))
	{
		br = read(fd, buffer_endline, BUFFER_SIZE);
		if (br == -1)
		{
			free(buffer_endline);
			return (NULL);
		}
		buffer_endline[br] = '\0';
		line = gnl_strjoin(line, buffer_endline);
	}
	free(buffer_endline);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer_toread;
	char		*str_ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer_toread = get_line(fd, buffer_toread);
	if (!buffer_toread)
		return (NULL);
	str_ret = get_break(buffer_toread);
	buffer_toread = get_rest(buffer_toread);
	return (str_ret);
}

/*int main(void)
{
	int	fd = open("example.txt", O_RDONLY);	
	char *str = get_next_line(fd);
		printf("%s", str);
	str = get_next_line(fd);	
		printf("%s", str);
	str = get_next_line(fd);	
		printf("%s", str);
	
	close(fd);
}*/
