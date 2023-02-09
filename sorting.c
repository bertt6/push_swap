#include "push_swap.h"

void    triple_sort(t_data **a_list, t_data **b_list)
{
    int i;
    int len;
    int min;

    i = 0;
    len = stacklen(a_list);
    min = find_min(a_list);
    while(i < len)
    {
        if((*a_list)->content == min)
        {
            pb(a_list, b_list);
            break;
        }
        ra(a_list);
        i++;
    }
    if((*a_list)->content > (*a_list)->next->content)
        sa(a_list);
    pa(b_list, a_list);
    if((*a_list)->content > (*a_list)->next->content)
        sa(a_list);
}

void    four_arguman_sort(t_data **a_list, t_data **b_list)
{
    int i;
    int len;
    int min;

    i = 0;
    len = stacklen(a_list);
    min = find_min(a_list);
    while(i < len)
    {
        if((*a_list)->content == min)
        {
            pb(a_list, b_list);
            break;
        }
        ra(a_list);
        i++;
    }
    triple_sort(a_list, b_list);
    pa(b_list, a_list);
}