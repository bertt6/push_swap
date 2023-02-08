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
            ft_lstadd_back(stack, new_stack); //HATALI ABI DUZELT SURAYI
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

void    triple_sort(t_data **a_list, t_data **b_list)
{ 
    int i;
    int len;
    int min;
    int max;

    i = 0;
    len = stacklen(a_list);
    min = find_min(a_list);
    max = find_max(a_list);
    while(i < len)
    {
        if((*a_list)->content == min)
        {
            pb(a_list, b_list);
            break;
        }
        i++;
    }
    if((*a_list)->content > (*a_list)->next->content)
    {
        sa(a_list);
    }
    pa(b_list, a_list);
}

void    four_arguman_sort(t_data **a_list, t_data **b_list)
{
    int i;
    int len;
    int min;
    int max;

    i = 0;
    len = stacklen(a_list);
    min = find_min(a_list);
    max = find_max(a_list);
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

void sorting_start(t_data **a_list, t_data **b_list, int ac)
{
    if(ac == 4)
        triple_sort(a_list, b_list);
    if(ac == 3)
        sa(a_list);
    if(ac == 5)
        four_arguman_sort(a_list, b_list);
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
    sorting_start(a_list, b_list, ac);
    printlist(a_list);
    // is_sorted(a_list);
    // stacklen(a_list);
    // printf("Sıralanacaklar:\n");
    // printf("-----------------\n");
    // printlist(a_list);
    // printf("İşlemler :\n");
    // printf("-----------------\n");
    // sorting_start(a_list, b_list, ac);
    // printf("Sıralanmışlar:\n");
    // printf("-----------------\n");
    // printlist(a_list);
    
    return (0);
}

