#include "push_swap.h"

void    stack_split(char *av, t_data **stack)
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
    while(x[i])
        free(x[i++]);
    free(x);
}

void    stack_new(t_data **stack, char **av)
{
    t_data *new_stack;
    int i;

    i = 1;
    while(av[i])
    {
        if(ft_strchr(av[i], ' ') != NULL)
            stack_split(av[i], stack);
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

int stacklen(t_data **stack)
{
    t_data *tmp;
    int i;

    i = 0;
    tmp = *stack;
    while(tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return i;
}

void is_sorted(t_data **stack)
{
    t_data *tmp;
    int i = 0;
    int len = stacklen(stack);

    tmp = *stack;
    while(tmp->next)
    {
        if(tmp->content < tmp->next->content)
            i++;
        tmp = tmp->next;
    }
    if(i == len - 1)
    {
        write(1, "sorted error\n", 13);
        exit(0);
    }
}

int issorted(t_data **stack)
{
    t_data *tmp;
    int i = 0;
    int len = stacklen(stack);

    tmp = *stack;
    while(tmp->next)
    {
        if(tmp->content < tmp->next->content)
            i++;
        tmp = tmp->next;
    }
    if(i == len - 1)
        return (1);
    return (0);
}

void sorting_start(t_data **a_list, t_data **b_list, int len)
{
    if(len == 3)
        triple_sort(a_list, b_list);
    if(len == 2)
        sa(a_list);
    if(len == 4)
        four_arguman_sort(a_list, b_list);
    if (len >= 5)
        go_radix_go_go(a_list, b_list);
}

int main(int ac, char **av)
{
    t_data **a_list;
    t_data **b_list;
    int len;

    if(ac < 2)
        return (0);
    a_list = (t_data **) malloc (sizeof(t_data *));
    b_list = (t_data **) malloc (sizeof(t_data *));
    *a_list = NULL;
    *b_list = NULL;
    stack_new(a_list, av);
    setFlag(a_list);
    len = stacklen(a_list);
    sorting_start(a_list, b_list, len);
    //printlist(a_list);


    return (0);
}

