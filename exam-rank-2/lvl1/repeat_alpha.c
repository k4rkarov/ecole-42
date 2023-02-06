#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0, y = 0;
	char *str = argv[1];

	if (argc == 2)
	{
		while(str[y])
		{
			if ((str[y] >= 'A' && str[y] <= 'Z') || (str[y] >= 'a' && str[y] <= 'z'))
			{
				if (str[y] >= 'a' && str[y] <= 'z')
					i = (str[y] - 'a') + 1;
				else if (str[y] >= 'A' && str[y] <= 'Z')
					i = (str[y] - 'A') + 1;
				while (i)
				{
					write(1, &str[y], 1);
					i--;
				}
			}
			else
				write(1, &str[y], 1);
			y++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
