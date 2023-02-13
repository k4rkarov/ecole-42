char	*ft_strrev(char *str)
{
	int		i = 0;
	int		len = 0;
	char	tmp;

	while (str[len])
		len++;
	len = len - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char str[12] = "hello world";
    printf("%s\n", ft_strrev(str));
    return (0);
}
