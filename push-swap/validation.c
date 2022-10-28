/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:56:52 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/28 18:23:24 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	order_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i + 1])
	{	
		if (ft_atoi(argv[i + 1]) < ft_atoi(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int	error(char **argv, int argc)
{
	if (argv_validation_isdigit(argv) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (arg_validation_max_min(argv) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (arg_validation_duplicate(argv) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (argc <= 2)
		return (1);
	if (order_argv(argv) == 0)
		return (1);
	return (0);
}

int	argv_validation_isdigit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (!argv[i][j])
			return (1);
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	arg_validation_max_min(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	arg_validation_duplicate(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]) && i != j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
