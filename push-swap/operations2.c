/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:39:50 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/24 19:00:53 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **receiver, t_stack **giver)
{
	t_stack	*node1;
	t_stack	*node2;

	if (*giver == NULL)
		return ;
	node1 = *giver;
	node2 = *giver;
	node1 = node1->next;
	node2->next = *receiver;
	*receiver = node2;
	*giver = node1;
}

void	pa(t_stack **stacka, t_stack **stackb)
{
	write(1, "pa\n", 3);
	push(stacka, stackb);
}

void	pb(t_stack **stacka, t_stack **stackb)
{
	write(1, "pb\n", 3);
	push(stackb, stacka);
}

void	rotate(t_stack **stack)
{
	t_stack	*lastnode;
	t_stack	*firstnode;
	t_stack	*node;

	lastnode = *stack;
	firstnode = *stack;
	node = (*stack)->next;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	firstnode->next = NULL;
	lastnode->next = firstnode;
	*stack = node;
}

void	rb(t_stack **stackb)
{
	write(1, "rb\n", 3);
	rotate(stackb);
}
