/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:50:06 by ide-frei          #+#    #+#             */
/*   Updated: 2022/07/28 20:35:04 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*put_new_line(char *line)
{
	char	*final;
	int		count;

	count = 0;
	if (!line[count])
		return (NULL);
	while (line[count] && line[count] != '\n')
		count++;
	final = malloc(ft_strlen(line) - count + 2);
	while (line[count])
	{	
		final[count] = line[count];
		count++;
	}
	if (line[count] == '\n')
		final[count++] = '\n';
	final[count] = '\0';
	return (final);
}

char	*get_break(char *line)
{
	int		count1;
	int		count2;
	char	*bufferstr;
	
	count1 = 0;
	count2 = 0;
	while (line[count1] != '\n' && line[count1])
		count1++;
	if (!line[count1])
	{
		free(line);
		return (NULL);
	}
	bufferstr = malloc(count1 + 1 * sizeof(char));
	if (!bufferstr)
		return (NULL);
	count1 = 0;
	while (line[count1] != '\n')
		bufferstr[count2++] = line[count1++];
	if (line[count1] == '\n')
		bufferstr[count2++] = line[count1++]; 
	bufferstr[count2] = '\0';
	free(line);
	return (bufferstr);
}

char	*get_line(int fd, char *line)
{	
	char	*buffer_endline;
	int		br;
	
	br = 1;
	if (!line)
		line = ft_strdup("\0");
	buffer_endline = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer_endline)
		return (NULL);
	while (br != 0 && !ft_strchr(line, '\n'))
	{
		br = read(fd, buffer_endline, BUFFER_SIZE);
		if (br == -1)
		{
			free(buffer_endline);
			return (NULL);
		}
		buffer_endline[br] = '\0';
		line = ft_strjoin(line, buffer_endline);
	}
	free(buffer_endline);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer_toread;
	char *str_ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer_toread = get_line(fd, buffer_toread);
	if (!buffer_toread)
		return (NULL);
	str_ret = get_break(buffer_toread);
	buffer_toread = put_new_line(buffer_toread); 
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
