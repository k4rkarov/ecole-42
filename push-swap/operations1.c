#include "push_swap.h"

// CRIANDO SA
void swap(t_stack **stack) 
{
	//2 ** porque precisamos acessar a lista inteira, ou seja, todos os nós.
    t_stack  *node1;
    t_stack  *node2; 

	//[9] [0] [3] [4] [1] [5]
	//objetivo:
	//[0] [9] [3] [4] [1] [5]

	//stack->next->next = [3] [4] ...
	//node2->next = [3] [4]
	
    node1 = *stack;  //[9] [3] [4]....
    node2 = (*stack)->next; //[0] [3]....

    node1->next = node2->next; //n1 = [9] [3] [4] [1] [5] NULL
    node2->next = node1; //n2 = [0] [9] [3] [4] [1] [5] NULL

	*stack = node2;
}

void sa(t_stack **stacka)
{
	swap(stacka);
}

void sb(t_stack **stackb)
{
	swap(stackb);
}

void ss(t_stack **stacka, t_stack **stackb)
{
	swap(stacka);
	swap(stackb);
}
