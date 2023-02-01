#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);

		if (argv[2][i] == '+')
			printf("%d\n", num1 + num2);
		else if (argv[2][i] == '-')
			printf("%d\n", num1 - num2);
		else if (argv[2][i] == '*')
			printf("%d\n", num1 * num2);
		else if (argv[2][i] == '/')
			printf("%d\n", num1 / num2);	
	}
	else
		printf("\n");
	return (0);
}
