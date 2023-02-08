int	is_power_of_2(unsigned int n)
{
	unsigned long int index;

	index = 1;
	while (index <= n)
	{
		if (index == n)
			return (1);
		index = index * 2;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int i = 0;
	while (i < 150)
	{
		printf("%d is %d\n", i, is_power_of_2(i));
		i++;
	}
	return (0);
}
