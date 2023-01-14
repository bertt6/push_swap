#include "push_swap.h"

void sa(t_data *data)
{
    int temp;

    temp = data->stack_a[0];
    data->stack_a[0] = data->stack_a[1];
    data->stack_a[1] = temp;
}

void sb(t_data *data)
{
    int temp;

    temp = data->stack_b[0];
    data->stack_b[0] = data->stack_b[1];
    data->stack_b[1] = temp;
}

void ss(t_data *data)
{
    sa(data);
    sb(data);
}

void ra(t_data *data)
{
    int temp;
    int temp1;
    int len;
    int i;

    len = 0;
    i = 0;
    temp = data->stack_a[0];
    while(data->stack_a[len])
        len++;
    while(data->stack_a[i])
    {
        data->stack_a[i - 1] = data->stack_a[i];
        i++;
    }
    data->stack_a[len - 1] = temp;
}

void rb(t_data *data)
{
    int temp;
    int len;
    int i;

    len = 0;
    i = 0;
    temp = data->stack_b[0];
    while(data->stack_b[len])
        len++;
    while(data->stack_b[i])
    {
        data->stack_b[i - 1] = data->stack_b[i];
        i++;
    }
    data->stack_b[len - 1] = temp;
}

void rr(t_data *data)
{
    ra(data);
    rb(data);
}
