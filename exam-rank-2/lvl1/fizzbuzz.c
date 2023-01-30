#include <unistd.h>

int number(int i, char *str)
{
	if (i > 9)
		number(i / 10, str);
	write(1, &str[i % 10], 1);
	return (0);
}

int	main()
{
	int i = 1;
	char str[10] = "0123456789";

	while(i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			number(i, str);
		i++;
		write(1, "\n", 1);
	}
}

