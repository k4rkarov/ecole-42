#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
		*lst = new;
	else
	{
		*lst = ft_lstlast(*lst);
		(*lst)->next = new;
	}
}