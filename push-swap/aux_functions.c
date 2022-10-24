#include "push_swap.h"

void print_stack(t_stack *stack)
{
  t_stack *tmp;
  
  tmp = stack;
  while (tmp)
  {
    printf("%d\n", tmp->num);
    tmp = tmp->next;
  }
}

int  stack_len(t_stack *stack)
{
  t_stack *tmp;
  int     i;

  i = 0;
  tmp = stack;
  while (tmp)
  {
    printf("%d\n", tmp->num);
    tmp = tmp->next;
    i++;
  }
  return (i);
}