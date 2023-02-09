#include <unistd.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	int i = 0;
	int	len = 0;
	int	y = 0;

	if (argc == 3)
	{
		while (argv[1][len])
		{
			len++;
		}
		while (argv[2][i])
		{
			if (argv[1][y] == argv[2][i])
				y++;
			i++;
		}
	i = 0;
	if (len == y)
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
