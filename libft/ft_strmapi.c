/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:54:05 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/30 15:09:34 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*f(unsigned int index, unsigned char letter)
{
	printf("%c", letter[index])
	index++;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;

	i = 0;
	while (s)
	{
		f(i, s[i])
	}
	str = malloc(sizeof(char) * i + 1);
	s[i] = '\0';
	return (0);
}

int main ()
{
	
}
