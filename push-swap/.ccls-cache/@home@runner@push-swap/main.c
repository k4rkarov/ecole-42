#include "push_swap.h"

t_stack *new_node(void)
{
	t_stack *node = 
	node = (t_stack*)malloc(sizeof(t_stack));
	node->next = NULL;
	return (node);
}

t_stack *value_received(int argc, char **argv)
{
	t_stack *stack;
	t_stack *tmp;
	int i;

	i = 1;
	stack = new_node();
	tmp = stack;
	while (i < argc)
	{
		tmp->num = atoi(argv[i]); //trocar pra ft_atoi
 		if (i < argc-1)
			{
				tmp->next = new_node();
				tmp = tmp->next;
			}
		i++;
	}
	return (stack);
}



int main(int argc, char **argv)
{
	t_stack *stack;

	stack = value_received(argc, argv);
	if (argc <= 2)
    	return (0);
	if (order(stack) == 0)
		return (0);
	// if (argv[i]  == letra || argv duplicado)
	// {
	// 	write(2, "Error\n", 6);
	// 	return (0);
	// }

	//****stack b para teste****
	// t_stack *stackb = new_node();
	// stackb->num = 8;
	// stackb->next = new_node();
	// stackb->next->num = 6;
	// stackb->next->next = new_node();
	// stackb->next->next->num = 7;


	// printf("pós pb:\n");
	// printf("stack a\n");
	// print_stack(stack);
	// printf("stack b\n");
	// print_stack(stackb);
	
	// pb(&stack, &stackb); //& = *(stack)
	// printf("pós pb:\n");
	
	// printf("stack a\n");
	// print_stack(stack);
	// printf("stack b\n");
	// print_stack(stackb);

	rrr(&stack, &stackb);
	print_stack(stack);
	print_stack(stackb);
}