/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorythm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:59:25 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/28 14:13:15 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ordenation(t_stack **stack)
{
	if (stack_len(*stack) == 2)
		sa(stack);
	else if (stack_len(*stack) == 3)
	{
		if ((*stack)->next->num < (*stack)->num)
			sa(stack);
		if ((*stack)->next->next->num < (*stack)->num)
			rra(stack);
		else if ((*stack)->next->next->num < (*stack)->next->num)
		{
			rra(stack);
			sa(stack);
		}
	}
	else if (stack_len(*stack) <= 5)
		ordenation_4and5(stack);
	else if (stack_len(*stack) > 5)
		ordenation_radix(stack);
}

void	ordenation_4and5(t_stack **stack)
{
	t_stack	*stacka;
	t_stack	*stackb;
	int		smallernode;
	int		len;

	stacka = *stack;
	stackb = 0;
	smallernode = find_min_number(&stacka);
	len = stack_len(stacka);
	while (len)
	{
		if (stacka->num == smallernode)
			pb(&stacka, &stackb);
		else
			ra(&stacka);
		len--;
	}
	smallernode = find_min_number(&stacka);
	len = stack_len(stacka);
	ordenation_4and5_p2(&stacka, &stackb, len, smallernode);
	*stack = stacka;
}

void	ordenation_4and5_p2(t_stack **stacka, \
		t_stack **stackb, int len, int smallernode)
{
	while (len)
	{
		if ((*stacka)->num == smallernode)
			pb(stacka, stackb);
		else
			ra(stacka);
		len--;
	}
	ordenation(stacka);
	if ((*stackb)->num < (*stackb)->next->num)
		sb(stackb);
	while (stack_len(*stackb) > 0)
		pa(stacka, stackb);
}

void	ordenation_radix(t_stack **stack)
{
	t_stack	*stacka;
	t_stack	*stackb;
	int		len_bit_num;
	int		len_stacka;
	int		i;

	i = 0;
	len_bit_num = len_bit(stack) + 1;
	stacka = *stack;
	stackb = NULL;
	while (i < len_bit_num)
	{
		len_stacka = stack_len(stacka);
		while (len_stacka)
		{
			if ((stacka->index & 1 << i) == 0)
				pb(&stacka, &stackb);
			else
				ra(&stacka);
			len_stacka--;
		}
		ordenation_radix_p2(&stacka, &stackb, len_bit_num, i);
		*stack = stacka;
		i++;
	}
}

void	ordenation_radix_p2(t_stack **stacka, \
		t_stack **stackb, int len_bit_num, int i)
{
	int	len_stackb;

	len_stackb = stack_len(*stackb);
	while (len_stackb)
	{
		if (((*stackb)->index & 1 << (i + 1)) != 0 || i == len_bit_num - 1)
			pa(stacka, stackb);
		else
			rb(stackb);
		len_stackb--;
	}
	if (*stacka != NULL)
		if (order(*stacka) && stack_len(*stackb) == 0)
			return ;
}
