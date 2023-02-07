#include "../push_swap.h"

void	ft_lstadd_front(t_data **lst, t_data *new)
{
	new->next = *lst;
	*lst = new;
}
