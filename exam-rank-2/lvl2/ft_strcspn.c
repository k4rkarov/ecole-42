#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i = 0;

	while (s[i])
	{

		i++;
	}
	return (i);
}

#include <stdio.h>
int	main()
{
	printf("%ld\n", ft_strcspn("trojan", "1234"));
	return (0);
}
