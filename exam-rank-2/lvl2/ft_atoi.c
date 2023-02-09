int	ft_atoi(const char *str)
{
	int res = 0;
	int i = 0;
	int sign = 1;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;	
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

#include <stdio.h>
#include <stdlib.h>
int	main ()
{
	char *str = "-2147483648";
	printf("%d\n %d\n", ft_atoi(str), atoi(str));
	return (0);
}
