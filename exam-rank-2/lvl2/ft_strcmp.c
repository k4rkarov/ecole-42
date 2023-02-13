int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char *str1 = "ola voce";
	char *str2 = "ola";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
	return (0);
}
