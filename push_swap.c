#include "push_swap.h"

int main(int ac, char **av)
{
    if(ac > 1)
    {
        t_data *data;
        data = malloc (sizeof(t_data));
        int len = 1;
        int i = 1;
        int j = 0;
        int x = 0;
        while(av[len])
            len++;
        len++;
        data->stack_a = malloc (len * sizeof(int));
        while(av[i])
        {
            if(issspace(av[i]))
            {
                data->splited = ft_split(av[i], ' ');
                while(data->splited[x])
                {
                    data->stack_a[j] = atoi(data->splited[x]);
                    x++;
                    j++;
                }
            }
            data->stack_a[j] = atoi(av[i]);
            i++;
            j++;
        }
        data->stack_a[j - 1] = '\0';
        i = 0;
        j = 0;
        while(data->stack_a[i] && data->stack_a)
        {
            printf("%d   i = %d\n", data->stack_a[i], i);
            i++;
        }
        
    }
}

