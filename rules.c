#include "push_swap.h"

void    swap(t_data **data)
{
    t_data *temp;

    if(ft_lstsize(*data) < 2)
        return ;
    temp = (*data)->next;
    (*data)->next = temp->next;
    temp->next = *data;
    *data = temp;
}

void    sa(t_data **a_swap)
{
    swap(a_swap);
    write(1, "sa\n", 3);
}

void    sb(t_data **b_swap)
{
    swap(b_swap);
    write(1, "sb\n", 3);
}

void    ss(t_data **a_swap, t_data **b_swap)
{
    if((ft_lstsize(*a_swap) < 2) || (ft_lstsize(*b_swap) < 2))
        return ;
    swap(a_swap);
    swap(b_swap);
    write(1, "ss\n", 3);
}