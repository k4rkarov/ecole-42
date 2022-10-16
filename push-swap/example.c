#include "push_swap.h"

int main2(void) {
	int arr[6] = {9, 0, 3, 4, 1, 5};
	int len_arr = 6;
	t_stack *stack;
	
	stack = (t_stack*)malloc(sizeof(t_stack));
	stack->num = arr[0];     //[9]
	stack->next = (t_stack*)malloc(sizeof(t_stack));
	stack->next->num = arr[1]; //[9]->[0]
	
	t_stack *tmp = stack; //[9]->[0]
	printf("tmp->num: %d\n", tmp->num);
	printf("stack->num: %d\n", stack->num);
	tmp = tmp->next; //[0]
	printf("tmp->num: %d\n", tmp->num);
	printf("stack->num: %d\n", stack->num);
	tmp->next = (t_stack*)malloc(sizeof(t_stack));
	tmp->next->num = arr[2]; //[0] [3]
	
	printf("tmp->num: %d\n", tmp->next->num);
	printf("stack: %d %d %d\n", stack->num, stack->next->num, stack->next->next->num);

	

	// printf("tmp->num: %d\n", tmp->num);
	// tmp->next =  (t_stack*)malloc(sizeof(t_stack));
	// tmp->next->num = arr[1];
	// tmp->next->next = 

	// int i = 1;
	// while (i < len_arr)
	// {
	// 	tmp = (t_stack*)malloc(sizeof(t_stack));
	// 	tmp->num = arr[i];
 //   		printf("tmp->num: %d\n", tmp->num);
	// 	tmp->next = (t_stack*)malloc(sizeof(t_stack));
 //    	tmp = tmp->next;
	// 	i++;
	// }

	// tmp->next = NULL;

	// printf("testando stack\n");

	// while(*stack)
	// {
	// 	printf("stack->num: %d\n", stack->num);
	// 	stack = stack->next;
	// }
	
}