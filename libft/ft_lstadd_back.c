#include "../push_swap.h"

void	ft_lstadd_back(t_data **lst, t_data *new)
{
	t_data	*trsh;

	if (!lst)
		return ;
	if (*lst)
	{
		trsh = ft_lstlast(*lst);
		trsh->next = new;
	}
	else
		*lst = new;
}

