/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <igorcarneiros@pm.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:42:48 by ide-frei          #+#    #+#             */
/*   Updated: 2022/02/14 16:26:04 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	*get_entry(char *border)
{
	int		start;
	int		stop;
	int		p;
	int		*entry_numbers;

	entry_numbers = malloc(16 * sizeof(int));
	stop = ft_strlen(border);
	start = 0;
	p = 0;
	while (1 < 31)
	{
		entry_numbers[1] = border[2];
		p++;
		start = start + 2;
	}
	return (entry_numbers);
}

int	ft_entry_size_validation(int n, char *entry)
{
	if (n != 2 || ft_strlen(entry) != 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
		return (0);
}

int	***gen_p_solutions(void)
{
	int	***mat;

	mat = malloc(4 * sizeof (int**));
	mat[0] = malloc(4 * sizeof (int*));
	mat[1] = malloc(4 * sizeof (int*));
	mat[2] = malloc(4 * sizeof (int*));
	mat[3] = malloc(4 * sizeof (int*));
	mat[0][0] = malloc(4 * sizeof (int));
	mat[0][1] = malloc(4 * sizeof (int));
	mat[0][2] = malloc(4 * sizeof (int));
	mat[0][3] = malloc(4 * sizeof (int));
	mat[1][0] = malloc(4 * sizeof (int));
	mat[1][1] = malloc(4 * sizeof (int));
	mat[1][2] = malloc(4 * sizeof (int));
	mat[1][3] = malloc(4 * sizeof (int));
	mat[2][0] = malloc(4 * sizeof (int));
	mat[2][1] = malloc(4 * sizeof (int));
	mat[2][2] = malloc(4 * sizeof (int));
	mat[2][3] = malloc(4 * sizeof (int));
	mat[3][0] = malloc(4 * sizeof (int));
	mat[3][1] = malloc(4 * sizeof (int));
	mat[3][2] = malloc(4 * sizeof (int));
	mat[3][3] = malloc(4 * sizeof (int));
	return (mat);
}

int	psolution_validation_left(int *test)
{
	int	cond;
	int	count;
	int	i;
	int	max;

	cond = '1';
	i = 1;
	count = '1';
	max = test[0];
	while (i <= 3)
	{
		if (test[i] > max)
		{
			count++;
			max = test[i];
		}
		i++;
	}
	if (count == cond)
		return (1);
	else
		return (0);
}

int	psolution_validation_right(int *test)
{
	int	cond;
	int	count;
	int	i;
	int	max;

	cond = '2';
	i = 3;
	count = '1';
	max = test[3];
	while (i >= 0)
	{
		if (test[i] > max)
		{
			count++;
			max = test[i];
		}
		i--;
	}
	if (count == cond)
		return (1);
	else
		return (0);
}

void	psolution_validation(int ***p_solutions)
{
	int	row;
	int	i;
	int	k;
	int	arrang[24][4] =
	{
	{'1', '2', '3', '4'},
	{'1', '2', '4', '3'},
	{'1', '3', '4', '2'},
	{'1', '3', '2', '4'},
	{'1', '4', '2', '3'},
	{'1', '4', '3', '2'},
	{'2', '1', '3', '4'},
	{'2', '1', '4', '3'},
	{'2', '3', '1', '4'},
	{'2', '3', '4', '1'},
	{'2', '4', '1', '3'},
	{'2', '4', '3', '1'},
	{'3', '1', '2', '4'},
	{'3', '1', '4', '2'},
	{'3', '2', '1', '4'},
	{'3', '2', '4', '1'},
	{'3', '4', '1', '2'},
	{'3', '4', '2', '1'},
	{'4', '1', '2', '3'},
	{'4', '1', '3', '2'},
	{'4', '2', '1', '3'},
	{'4', '2', '3', '1'},
	{'4', '3', '1', '2'},
	{'4', '3', '2', '1'},
	};

	k = 0;
	i = 0;
	row = 0;
	while (row <= 23)
	{
		if (psolution_validation_left(arrang[row]))
		{
			if (psolution_validation_right(arrang[row]))
			{
				while (i <= 3)
				{
					p_solutions[0][k][i] = arrang[row][i];
					i++;
				}
				k++;
				i = 0;
			}
		}
		row++;
	}
}

int	validation_numbers(int *entry_n)
{
	int	n;

	n = 0;
	while (n <= 15)
	{
		if (entry_n[n] > '4' || entry_n[n] < '1')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		n++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	*entry_n;
	int	***p_solutions;

	p_solutions = gen_p_solutions();
	if (ft_entry_size_validation(argc, argv[1]))
		return (0);
	entry_n = get_entry(argv[1]);
	if (validation_numbers(entry_n))
		return (0);
	psolution_validation(p_solutions);
}
