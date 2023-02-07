#include "../push_swap.h"

int	ft_lstsize(t_data *lst)
{
	int	size;

	size = 0;
	while (lst && ++size)
	{
		lst = lst -> next;
	}
	return (size);
}
