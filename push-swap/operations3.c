/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:36:42 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/24 18:38:24 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **stacka, t_stack **stackb)
{
	write(1, "rr\n", 3);
	ra(stacka);
	rb(stackb);
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*lastnode;
	t_stack	*node;
	t_stack	*stackfinal;

	lastnode = *stack;
	stackfinal = *stack;
	while (lastnode->next != NULL)
	{
		if (lastnode->next->next == NULL)
			node = lastnode;
		lastnode = lastnode->next;
	}
	node->next = NULL;
	lastnode->next = stackfinal;
	*stack = lastnode;
}

void	rra(t_stack **stacka)
{
	write(1, "rra\n", 4);
	reverse_rotate(stacka);
}

void	rrb(t_stack **stackb)
{
	write(1, "rrb\n", 4);
	reverse_rotate(stackb);
}

void	rrr(t_stack **stacka, t_stack **stackb)
{
	write(1, "rrr\n", 4);
	rra(stacka);
	rrb(stackb);
}
