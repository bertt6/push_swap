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
    
}