#include "push_swap.h"

int main()
{
    t_data *data;
    data->stack_a = malloc (5 * (sizeof(int)));
    data->stack_b = malloc (5 * (sizeof(int)));
    data->stack_a[0] = 4;
    data->stack_a[1] = 2;
    data->stack_a[2] = 3;
    data->stack_a[3] = 1;
    data->stack_a[4] = '\0';

    data->stack_b[0] = 7;
    data->stack_b[1] = 1;
    data->stack_b[2] = 2;
    data->stack_b[3] = 9;
    data->stack_b[4] = '\0';
    int i = 0;
    while(data->stack_a[i] && data->stack_b[i])
    {
        printf("%d    %d\n", data->stack_a[i], data->stack_b[i]);
        i++;
    }
    printf("-------------\n"),
    rra(data);
    i = 0;
    while(data->stack_a[i] && data->stack_b[i])
    {
        printf("%d    %d\n", data->stack_a[i], data->stack_b[i]);
        i++;
    }
}