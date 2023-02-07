#include "push_swap.h"

void    stack_split(t_data **stack, char *av)
{
    int i;
    char **x;
    t_data *new;

    i = -1;
    x = ft_split(av, 32);
    while(x[++i])
    {
        new = ft_lstnew(ft_atoi(x[i]));
        ft_lstadd_back(stack, new);
    }
}

void    stack_new(t_data **stack, char **av)
{
    t_data *new_stack;
    int i;

    i = 1;
    while(av[i])
    {
        if(ft_strchr(av[i], ' ') != NULL)
            stack_split(stack, av[i]);
        else
        {
            new_stack = ft_lstnew(ft_atoi(av[i]));
            ft_lstadd_back(stack, new_stack);
        }
        i++;
    }
    check_argum(stack);

}

void    printlist(t_data **stack)
{
    t_data *tmp;

    tmp = *stack;
    while(tmp)
    {
        printf("%d\n", tmp->content);
        tmp = tmp->next;
    }
}


int main(int ac, char **av)
{
    t_data **a_list;
    t_data **b_list;

    if(ac < 2)
        return (0);
    a_list = (t_data **) malloc (sizeof(t_data *));
    b_list = (t_data **) malloc (sizeof(t_data *));
    *a_list = NULL;
    *b_list = NULL;
    stack_new(a_list, av);
    printlist(a_list);
    
}

