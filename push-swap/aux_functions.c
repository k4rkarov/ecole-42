/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:16:12 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/24 19:06:25 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

long int	ft_atoi(const char *str)
{
	int			count;
	long int	res;

	count = 0;
	while (str[count] && (str[count] == ' ' \
		|| (str[count] >= '\t' && str[count] <= '\r')))
		count++;
	if (str[count] == '-' || str[count] == '+')
		res = ft_catnbr(str + count + 1);
	else
		res = ft_catnbr(str + count);
	if (str[count] == '-')
		res *= -1;
	return (res);
}

size_t	ft_strlen(char *str)
{
	size_t	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

int	order(t_stack *stack)
{
	t_stack	*node1;
	t_stack	*node2;
	t_stack	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		node1 = tmp;
		node2 = tmp->next;
		if (node2->num < node1->num)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	find_min_number(t_stack **stack)
{
	t_stack	*tmp;
	int		smallernode;

	tmp = *stack;
	smallernode = tmp->num;
	while (tmp->next)
	{
		if (smallernode > tmp->next->num)
			smallernode = tmp->next->num;
		tmp = tmp->next;
	}
	return (smallernode);
}
