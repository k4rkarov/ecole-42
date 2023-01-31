#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0, end = 0;

	if (argc == 2)
	{
		while(argv[1][i])
			i++;
		i--;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		end = i;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			i--;
		i++;
		while(i <= end)
			write(1, &argv[1][i++], sizeof(char));		
	}
	write(1, "\n", 1);
}
