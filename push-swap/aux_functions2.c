/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:31 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/28 14:08:25 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_bit(t_stack **stack)
{
	int		biggernode;
	int		rest;
	t_stack	*tmp;

	rest = 0;
	tmp = *stack;
	biggernode = (*stack)->num;
	while (tmp->next)
	{
		if (biggernode < tmp->next->num)
		{
			biggernode = tmp->next->num;
		}
		tmp = tmp->next;
	}
	while (biggernode > 0)
	{
		biggernode = biggernode / 2;
		rest++;
	}
	return (rest);
}

int	arg_index(char **argv, char *str)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) < ft_atoi(str))
			res++;
		i++;
	}
	return (res);
}

void	free_all(t_stack **stack)
{
	t_stack	*node;
	t_stack	*nextnode;

	node = *stack;
	while (node)
	{
		nextnode = node->next;
		free(node);
		node = nextnode;
	}
	*stack = NULL;
}

long int	ft_catnbr(const char *str)
{
	int			counter;
	long int	res;

	counter = 0;
	res = 0;
	while (str[counter] >= '0' && str[counter] <= '9' && str[counter] != 0)
	{
		res = res * 10 + (str[counter] - '0');
		counter++;
	}
	return (res);
}
