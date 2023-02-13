#include <unistd.h>

int	duplicate(char *str, char c, int index)
{
	int	i = 0;
	
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main (int argc, char **argv)
{
	int i = 0;
	int	y = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if(duplicate(argv[1], argv[1][i], i ) == 1)
			{
				y = 0;
				while (argv[2][y])
				{	
					if (argv[1][i] == argv[2][y])
					{
	
						write(1, &argv[1][i], 1);
						break ;
					}
					y++;
				}
			}
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
