#include "push_swap.h"

void    rev_rot(t_data **stack)
{
    t_data *lastbutone;
    t_data *last;
    

    if(ft_lstsize(*stack) < 2)
        return ;
    lastbutone = *stack;
    while(lastbutone->next->next)
        lastbutone = lastbutone->next;
    last = lastbutone->next;
    lastbutone->next = NULL;
    last->next = *stack;
    *stack = last;
}

void rra(t_data **stack)
{
    rev_rot(stack);
    write(1, "rra\n", 3);
}

void rrb(t_data **stack)
{
    rev_rot(stack);
    write(1, "rrb\n", 3);
}

void rrr(t_data **a_list, t_data **b_list)
{
    if(ft_lstsize(*a_list) < 2 && ft_lstsize(*b_list) < 2)
        return ;
    rev_rot(a_list);
    rev_rot(b_list);
    write(1, "rrr\n", 3);
}