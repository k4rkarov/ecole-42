#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0, y = 1;

	if (argc > 1)
	{
		while (argv[y])
		{
			while (argv[y][i])
			{
				if (argv[y][i] >= 'A' && argv[y][i] <= 'Z')
					argv[y][i] = argv[y][i] + 32;
				if ((argv[y][i] >= 'a' && argv[y][i] <= 'Z') && (argv[y][i - 1] == ' ' || argv[y][i - 1] == '\t'))
					argv[y][i] = argv[y][i] - 32;
				write(1, &argv[y][i], 1);
				i++;
			}
			y++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
