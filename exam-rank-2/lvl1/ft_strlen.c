int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
int	main()
{
	char *str = "alfafa";
	ft_strlen(str);
	printf("palavra: %s\ntamanho: %d", str, ft_strlen(str));
}
