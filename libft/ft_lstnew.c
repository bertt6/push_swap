#include "../push_swap.h"

t_data	*ft_lstnew(int content)
{
	t_data	*ret;

	ret = (t_data *)malloc(sizeof(t_data));
	if (!ret)
		return ((void *)0);
	ret->content = content;
	ret->flag = -1;
	ret->next = NULL;
	return (ret);
}
