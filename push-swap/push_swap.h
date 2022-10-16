#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>

typedef struct s_stack 
{
  int num;
  struct s_stack *next;
} t_stack;

int		stack_len(t_stack *stack);
void	swap(t_stack **stack);
void	sa(t_stack **stacka);
void	sb(t_stack **stackb);

int		order(t_stack *stack);
int		stack_len(t_stack *stack);
void	print_stack(t_stack *stack);
t_stack	*new_node(void);
t_stack	*value_received(int argc, char **argv);
void 	reverse_rotate(t_stack **stack);

#endif