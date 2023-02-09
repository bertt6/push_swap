#include "push_swap.h"

void	put_error(char *str)
{
	ft_putstr_fd(str, 1);
	exit (0);
}

int find_min(t_data **a_list)
{
    t_data *tmp;
    int min;

    tmp = *a_list;
    min = tmp->content;

    while(tmp)
    {
        if(tmp->content < min)
            min = tmp->content;
        tmp = tmp->next;
    }
    return min;
}