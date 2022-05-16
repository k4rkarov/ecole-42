/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:27:39 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/12 18:27:44 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <unistd.h>
#include <ctype.h>
#include <limits.h>

int	main(void)
{
	char	test[99] = "0";
	char	test1[99] = "0";
	char	buffer[99] = "123456789";
	char	buffer1[99]="ABCDEFGHIJLMNOPQRSTUVXZ";
	char	buffer2[99]="AEGIOU AEIOU";
	char	buffer3[99]="AAAA";
	char	buffer4[99]="BBBBBBBBBBBBBBBBBBBB";
	int		i;
	int		u;
	char	*string;
	char	*string_og;
	/* -------------------------------------------------------------------------
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	---------------------------------------------------------------------------*/
	printf("-----------------------------ft_isalpha-------------------\n");
	printf("\nEssa função testa o parametro para a função ft_isalpha, caso seja uma letra entre a-z ou A-Z o teste e verdadeiro e retorna 1, se falso retorna 0\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", ft_isalpha(i));
		i++;
	}
	printf("\n");
	printf("----original----\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", isalpha(i));
		i++;
	}
	printf("\n----ft x original----\n");
	i = 0;
	while (i <= 127)
	{		
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("Erro in index[%d] \n", i);			
		}
		else
			printf("OK!!!!");
		i++;
	}
	
	printf("\n");	
	printf("-----------------------------ft_isdigit-------------------\n");
	printf("\nEssa função testa o parametro para a função ft_digit, caso seja um numero de 0-9 o teste e verdadeiro e retorna 1, se falso retorna 0\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", ft_isdigit(i));
		i++;
	}
	printf("\n");
	printf("----original----\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", isdigit(i));
		i++;
	}
	printf("\n");
	printf("\n----ft x original----\n");
	i = 0;
	while (i <= 127)
	{		
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("Erro in index[%d] \n", i);			
		}
		i++;
	}
	printf("\n\n-----------------------------ft_isalnum-------------------\n");
	printf("\nEssa função testa o parametro para a função ft_isalnum, caso seja um numero de 0-9, uma letra de A-Z ou a-z o teste resulte verdadeiro e retorna 1, se falso retorna 0\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", ft_isalnum(i));
		i++;
	}
	printf("\n");
	printf("----original----\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", isalnum(i));
		i++;
	}
	printf("\n\n----ft x original----");
	i = 0;
	while (i <= 127)
	{		
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("Erro in index[%d] \n", i);			
		}
		else
			printf("OK!!!!");
		i++;
	}
	printf("\n\n-----------------------------ft_isascii-------------------\n");
	printf("\nEssa função testa o parametro para a função ft_ascii caso seja um elemento da tabela ascii o teste retorna 1, se falso retorna 0\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", ft_isascii(i));
		i++;
	}
	printf("\n");
	printf("----original----\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", isascii(i));
		i++;
	}
	printf("\n----ft x original----\n");
	i = 0;
	while (i <= 127)
	{		
		if (ft_isascii(i) != isascii(i))
		{
			printf("Erro in index[%d] \n", i);			
		}
		else
			printf("OK!!!!");
		i++;
	}
	printf("\n\n-----------------------------ft_isprint-------------------\n");
	printf("\nEssa função testa o parametro para a função ft_print caso seja um elemento da tabela ascii imprimivel da tabela ascii o teste retorna 1, se falso retorna 0\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", ft_isprint(i));
		i++;
	}
	printf("\n");
	printf("----original----\n");
	i = 0;
	while (i <= 127)
	{
		printf("%d ", isprint(i));
		i++;
	}
	printf("\n----ft x original----\n");
	i = 0;
	while (i <= 127)
	{		
		if (ft_isprint(i) != isprint(i))
		{
			printf("Erro in index[%d] \n", i);			
		}
		else
			printf("OK!!!!");
		i++;
	}
	printf("\n");
	printf("\n\n-----------------------------ft_strlen-------------------\n\n");
	printf("\nEssa função conta a quantidade de caracteres dentro de uma string\n");
	printf("-------FT-------\n");
	printf("ft_strlen = %lu\n", ft_strlen(buffer1));
	printf("----original----\n");
	printf("strlen = %lu\n", strlen(buffer1));
	printf("\n----ft x original----\n");
	if (ft_strlen(buffer1) != strlen(buffer1))
	{
		printf("<<<<Erro>>>>\n");
	}
	else
		printf("OK!!!!");
	printf("\n\n-----------------------------ft_mamset-------------------\n\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	string = ft_memset(test, 'R', 7);
	printf("%p\n", test);
	printf("\n\n----original----\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	string_og = memset(test, 'R', 7);
	printf("%p\n", test);
	if (string == string_og)
	{
		printf("OK!!!!");
	}
	else
		printf("ERRO!!!!");
	printf("\n\n-----------------------------ft_bzero-------------------\n\n");
	
	printf("-------FT-------\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	ft_bzero(test, 7);
	i = 0;
	while (i < (int)sizeof(test))
	{
		if (test[i] == 0)
			write(1,"-",1);
		write (1, &test[i], 1);
		i++;
	}
	printf("\n\n----original----\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	bzero(test, 7);
	i = 0;
	while (i < (int)sizeof(test))
	{
		if (test[i] == 0)
			write(1,"-",1);
		write (1, &test[i], 1);
		i++;
	}
	if (ft_bzero == bzero)
		printf("OK!!!!");
	/* printf("\n"); */
	/* printf("\n\n-----------------------------memcpy-------------------\n\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	printf("%s\n", ft_memcpy(test1, &test[0], 6));
	printf("\n\n----original----\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	printf("%s\n", memcpy(test1, &test[0], 6)); */
	printf("\n");
	/* printf("\n\n-----------------------------memmove-------------------\n\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	printf("%s\n", ft_memmove(test1, &test[0], 6));
	printf("\n\n----original----\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	printf("%s\n", memmove(test1, &test[0], 6)); */
	printf("\n");
	printf("\n\n-----------------------------strlcpy-------------------\n\n");
	
	printf("-------FT-------\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	i = 0;
	while (i <= (int)sizeof(buffer))
	{
		if (i == (int)sizeof(buffer))
		{
			test1[i] = 0;
			i++;
		}
		else
		{
			test1[i] = buffer[i];
			i++;
		}
	}
	printf("strcpy test = %lu\n", ft_strlcpy(test1, test, 5));
	printf("strlcpy test1 test = %s\n", test1);
	i = 0;
	while (i < (int)sizeof(test1))
	{
		if (test1[i] == 0)
			write(1,"-",1);
		write (1, &test1[i], 1);
		i++;
	}
	printf("\n\n----original----\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	printf("strcpy test = %lu\n", strlcpy(test1, test, 5));
	printf("strlcpy test1 test = %s\n", test1);
	i = 0;
	while (i < (int)sizeof(test1))
	{
		if (test1[i] == 0)
			write(1,"-",1);
		write (1, &test1[i], 1);
		i++;
	}
	printf("\n\n-----------------------------strlcat-------------------\n\n");
	printf("-------FT-------\n");
	i = 0;
	while (i <= (int)sizeof(buffer3))
	{
		if (i == (int)sizeof(buffer3))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer3[i];
			i++;
		}
	}
	i = 0;
	while (i <= (int)sizeof(buffer4))
	{
		if (i == (int)sizeof(buffer4))
		{
			test1[i] = 0;
			i++;
		}
		else
		{
			test1[i] = buffer4[i];
			i++;
		}
	}
	printf("strlcat = %lu\n", ft_strlcat(test1, test, 0));
	printf("str4 = %s\n", test1);
	printf("str5 = %s\n", test);

	printf("\n\n----original----\n");
	i = 0;
	while (i <= (int)sizeof(buffer3))
	{
		if (i == (int)sizeof(buffer3))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer3[i];
			i++;
		}
	}
	i = 0;
	while (i <= (int)sizeof(buffer4))
	{
		if (i == (int)sizeof(buffer4))
		{
			test1[i] = 0;
			i++;
		}
		else
		{
			test1[i] = buffer4[i];
			i++;
		}
	}
	printf("strlcat = %lu\n", strlcat(test1, test, 0));
	printf("str4 = %s\n", test1);
	printf("str5 = %s\n", test);
	printf("\n\n-----------------------------toupper-------------------\n\n");
	i = 97;
	while (i <= 122)
	{
		write (1, &i, 1);
		i++;
	}
	printf("\n\n-------FT-------\n");
	i = 97;
	while (i <= 'z')
	{
		u = ft_toupper(i);
		write (1, &u, 1);
		i++;
	}
	printf("\n\n----original----\n");
	i = 97;
	while (i <= 122)
	{
		u = toupper(i);
		write (1, &u, 1);
		i++;
	}
	printf("\n\n-----------------------------tolower-------------------\n\n");
	i = 'A';
	while (i <= 'Z')
	{
		write (1, &i, 1);
		i++;
	}
	printf("\n\n-------FT-------\n");
	i = 'A';
	while (i <= 'Z')
	{
		u = ft_tolower(i);
		write (1, &u, 1);
		i++;
	}
	printf("\n\n----original----\n");
	i = 'A';
	while (i <= 'Z')
	{
		u = tolower(i);
		write (1, &u, 1);
		i++;
	}
	printf("\n\n-----------------------------strchr-------------------\n\n");

	printf("\n\n-------FT-------\n");
	i = 0;
	while (i <= (int)sizeof(buffer2))
	{
		if (i == (int)sizeof(buffer2))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer2[i];
			i++;
		}
	}
	printf("\n%s\n", ft_strchr(test, 'I'));
	printf("\n%s\n", ft_strchr(test, 'a'));
	i = 0;
	
	
	printf("\n\n----original----\n");
	i = 0;
	while (i <= (int)sizeof(buffer2))
	{
		if (i == (int)sizeof(buffer2))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer2[i];
			i++;
		}
	}
	printf("\n%s\n", strchr(test, 'I'));
	printf("\n%s\n", strchr(test, 'a'));
	printf("\n\n-----------------------------strrchr-------------------\n\n");

	printf("\n\n-------FT-------\n");
	i = 0;
	while (i <= (int)sizeof(buffer2))
	{
		if (i == (int)sizeof(buffer2))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer2[i];
			i++;
		}
	}
	printf("\n%s\n", ft_strrchr(test, 'I'));
	printf("\n%s\n", ft_strrchr(test, 'a'));
	i = 0;	
	printf("\n\n----original----\n");
	i = 0;
	while (i <= (int)sizeof(buffer2))
	{
		if (i == (int)sizeof(buffer2))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer2[i];
			i++;
		}
	}
	printf("\n%s\n", strrchr(test, 'I'));
	printf("\n%s\n", strrchr(test, 'a'));
	
	printf("\n\n-----------------------------strncmp-------------------\n\n");
	i = 0;
	while (i <= (int)sizeof(buffer2))
	{
		if (i == (int)sizeof(buffer2))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer2[i];
			i++;
		}
	}
	i = 0;
	while (i <= (int)sizeof(buffer))
	{
		if (i == (int)sizeof(buffer))
		{
			test1[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer[i];
			i++;
		}
	}
	printf("\n%s\n", test);
	printf("\n%s\n", test1);

	printf("\n\n-------FT-------\n");
	printf("\n%d\n", ft_strncmp(test, test1, 100));
	printf("\n\n----original----\n");
	printf("\n%d\n", strncmp(test, test1, 100));
	printf("\n\n-----------------------------memchr-------------------\n\n");

	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test1[i] = 0;
			i++;
		}
		else
		{
			test1[i] = buffer1[i];
			i++;
		}
	}
	printf("\n%s\n", test1);

	printf("\n\n-------FT-------\n");
	printf("\n%s\n", ft_memchr(test1, 'D', 5));
	printf("\n%s\n", ft_memchr(test1, '1', 5));
	printf("\n%s\n", ft_memchr(test1, 'E', 2));
	printf("\n\n----original----\n");
	printf("\n%s\n", memchr(test1, 'D', 5));
	printf("\n%s\n", memchr(test1, '1', 5));
	printf("\n%s\n", memchr(test1, 'E', 2));

	printf("\n\n-----------------------------memcmp--------------------\n\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	i = 0;
	while (i <= (int)sizeof(buffer))
	{
		if (i == (int)sizeof(buffer))
		{
			test1[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer[i];
			i++;
		}
	}
	printf("\n%s\n", test);
	printf("\n%s\n", test1);

	printf("\n\n-------FT-------\n");
	printf("\n%d\n", ft_memcmp(test, test1, 100));
	printf("\n\n----original----\n");
	printf("\n%d\n", memcmp(test, test1, 100));

/* 	printf("\n\n-----------------------------strnstr--------------------\n\n");
	i = 0;
	while (i <= (int)sizeof(buffer1))
	{
		if (i == (int)sizeof(buffer1))
		{
			test[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer1[i];
			i++;
		}
	}
	i = 0;
	while (i <= (int)sizeof(buffer2))
	{
		if (i == (int)sizeof(buffer2))
		{
			test1[i] = 0;
			i++;
		}
		else
		{
			test[i] = buffer2[i];
			i++;
		}
	}
	printf("\n%s\n", test);
	printf("\n%s\n", test1);
	i = 3;
	printf("\n\n-------FT-------\n");
	printf("\n%s\n", ft_strnstr(test1, "BCD", i));
	printf("\n\n----original----\n");
	printf("\n%s\n", strnstr(test1, "BCD", i)); */

	printf("\n\n-----------------------------atoi--------------------\n\n");
	printf("\n\n-------FT-------\n");
	printf("\n%d\n", ft_atoi("-2147I483648"));
	printf("\n\n----original----\n");
	printf("\n%d\n", atoi("-2147I483648"));
	printf("\n\n-------------------------end-------------------------------\n\n");

	return (0);
}

