#include "push_swap.h"

//giver = [9] [0] [3] [4] [1] [5]
//receiver = [8] [6]

//APÓS PUSH
//giver = 
//receiver = giver
//tmp = giver
//tmp->next = receiver

void	push(t_stack **receiver, t_stack **giver)
{
	t_stack *node1;
	t_stack *node2;

	if (*giver == NULL)
		return ;
	node1 = *giver; //[9] [0] [3] [4] [1] [5] 
	node2 = *giver; // [9] [0] [3] [4] [1] [5]
	node1 = node1->next;// [0] [3] [4] [1] [5]

	//desassociar os nós acima ^
	node2->next = *receiver; //[9]->[8] [6]

	*receiver = node2;
	*giver = node1;
}

void pa(t_stack **stacka, t_stack **stackb)
{
	push(stacka, stackb);
}

void pb(t_stack **stacka, t_stack **stackb)
{
	push(stackb, stacka);
}

//inicial: [9] [0] [3] [4] [1] [5] NULL
//pós rotate: [0] [3] [4] [1] [5] [9] NULL

void rotate(t_stack **stack)
{
	t_stack *lastnode;
	t_stack *firstnode;
	t_stack *node; 
	
	lastnode = *stack; // [9] [0] [3] [4] [1] [5] NULL
	firstnode = *stack; // [9] [0] [3] [4] [1] [5] NULL
	node = (*stack)->next; // [0] [3] [4] [1] [5] NULL
	while (lastnode->next != NULL)
		lastnode = lastnode->next; //[5] NULL
	firstnode->next = NULL; //[9] NULL;
	lastnode->next = firstnode; //[5] [9] NULL
	

	*stack = node; //[0] [3] [4] [1] [5] [9] NULL
}

void rb(t_stack **stackb)
{
	rotate(stackb);
}

void ra(t_stack **stacka)
{
	rotate(stacka);
}

void rr(t_stack **stacka, t_stack **stackb)
{
	ra(stacka);
	rb(stackb);
}

void reverse_rotate(t_stack **stack)
{
	t_stack *lastnode;
	t_stack *node;
	t_stack *stackfinal;

	lastnode = *stack; // [9] [0] [3] [4] [1] [5] NULL
	stackfinal = *stack; // [9] [0] [3] [4] [1] [5] NULL
	while (lastnode->next != NULL)
	{
		if (lastnode->next->next == NULL)
			node = lastnode; //[1] [5] null
		lastnode = lastnode->next; // [5] null
	}
	node->next = NULL; // [1] null
	lastnode->next = stackfinal;//[5] ([9] [0] [3] [4] [1] null)
		//cortar é mudar pra onde ele aponta
	// OBJETIVO: [5] [9] [0] [3] [4] [1] NULL
	*stack = lastnode;
}

void rra(t_stack **stacka)
{
	reverse_rotate(stacka);
}

void rrb(t_stack **stackb)
{
	reverse_rotate(stackb);
}

void rrr(t_stack **stacka, t_stack **stackb)
{
	rra(stacka);
	rrb(stackb);
}