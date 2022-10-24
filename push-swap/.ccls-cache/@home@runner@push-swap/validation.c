#include "push_swap.h"

int  order(t_stack *stack)
{
  //só uma * serve só pra olhar a relação entre os nõs e alterar o o que esta dentro de qualquer nó, porém não a referencia do espaço (quem vem antes e depois). para alterar isso, 2 **
  //[9] [0] [3] [4] [1] [25]
	t_stack *node1;
	t_stack *node2;
	t_stack *tmp;

	tmp = stack;
	while (tmp->next)
	{
		node1 = tmp;
		node2 = tmp->next;
		// printf("%d\n", node1->num);
		// printf("%d\n", node2->num);
		if (node2->num < node1->num)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}