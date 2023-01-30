#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int	var1 = 20;
	int	var2 = 30;
	int *ip1, *ip2;
	ip1 = &var1;
	ip2 = &var2;

	printf("%d %d\n", var1, var2);
	ft_swap(ip1,ip2);
	printf("%d %d\n", var1, var2);
	return (0);
}
