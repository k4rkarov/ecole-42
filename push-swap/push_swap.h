/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:08:14 by ide-frei          #+#    #+#             */
/*   Updated: 2022/10/28 18:47:11 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}				t_stack;

int			stack_len(t_stack *stack);
void		push(t_stack **receiver, t_stack **giver);
void		pa(t_stack **stacka, t_stack **stackb);
void		pb(t_stack **stacka, t_stack **stackb);
void		swap(t_stack **stack);
void		sa(t_stack **stacka);
void		sb(t_stack **stackb);
void		ss(t_stack **stacka, t_stack **stackb);
void		rotate(t_stack **stack);
void		rb(t_stack **stackb);
void		ra(t_stack **stacka);
void		rr(t_stack **stacka, t_stack **stackb);
void		reverse_rotate(t_stack **stack);
void		rra(t_stack **stacka);
void		rrb(t_stack **stackb);
void		rrr(t_stack **stacka, t_stack **stackb);
int			stack_len(t_stack *stack);
void		print_stack(t_stack *stack); //excluir
t_stack		*new_node(void);
t_stack		*value_received(int argc, char **argv);
int			error(char **argv, int argc);
int			order(t_stack *stack);
int			order_argv(char **argv);
int			argv_validation_isdigit(char **argv);
int			arg_validation_max_min(char **argv);
int			arg_validation_duplicate(char **argv);
long int	ft_atoi(const char *str);
long int	ft_catnbr(const char *str);
int			ft_strcmp(char *s1, char *s2); //excluir
size_t		ft_strlen(char *str);
void		ordenation(t_stack **stack);
void		ordenation_4and5(t_stack **stack);
void		ordenation_4and5_p2(t_stack **stacka, \
		t_stack **stackb, int len, int smallernode);
int			find_min_number(t_stack **stack);
void		ordenation_radix(t_stack **stack);
void		ordenation_radix_p2(t_stack **stacka, \
		t_stack **stackb, int len_bit_num, int i);
int			len_bit(t_stack **stack);
int			arg_index(char **argv, char *str);
void		free_all(t_stack **stack);

#endif
