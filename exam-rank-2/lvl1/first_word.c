#include <unistd.h>

int	main(int argc, char **argv)
{
	int y = 0;
	
	if (argc == 2)
	{
		while (argv[1][y] == 32 || argv[1][y] == 9)
			y++;
		while(argv[1][y] && argv[1][y] != ' ')
		{
			write(1, &argv[1][y], sizeof(char));
			y++;
		}
	}
	write(1, "\n", 1);
}
