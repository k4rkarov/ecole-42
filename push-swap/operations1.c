/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:48:01 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/24 18:51:16 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*node1;
	t_stack	*node2;

	node1 = *stack;
	node2 = (*stack)->next;
	node1->next = node2->next;
	node2->next = node1;
	*stack = node2;
}

void	sa(t_stack **stacka)
{
	write(1, "sa\n", 3);
	swap(stacka);
}

void	sb(t_stack **stackb)
{
	write(1, "sb\n", 3);
	swap(stackb);
}

void	ss(t_stack **stacka, t_stack **stackb)
{
	write(1, "ss\n", 3);
	swap(stacka);
	swap(stackb);
}

void	ra(t_stack **stacka)
{
	write(1, "ra\n", 3);
	rotate(stacka);
}
