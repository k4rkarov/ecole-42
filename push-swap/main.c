/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:51:45 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/24 18:57:37 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_node(void)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	node->next = NULL;
	return (node);
}

t_stack	*value_received(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*tmp;
	int		i;

	i = 1;
	stack = new_node();
	tmp = stack;
	while (i < argc)
	{
		tmp->num = (int)ft_atoi(argv[i]);
		tmp->index = arg_index(argv, argv[i]);
		if (i < argc - 1)
		{
			tmp->next = new_node();
			tmp = tmp->next;
		}
		i++;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (error(argv, argc) == 1)
		return (0);
	stack = value_received(argc, argv);
	ordenation(&stack);
	free_all(&stack);
}
