#include "push_swap.h"

void    up_move(int *stack, int len)
{
    int i;
    int *newar;

    i = 1;
    newar = malloc (sizeof(int) * len);
    while(i < len)
    {
        newar[i - 1] = stack[i];
        i++;
    }
    i = 0;
    while(i < len)
    {
        stack[i] = newar[i];
        i++;
    }
    free(newar);
}


void down_move(int *stack, int len)
{
    int i;
    int *newar;

    i = 0;
    newar = malloc (sizeof(int) * len);
    while(i < len)
    {
        newar[i] = stack[i];
        i++;
    }
    i = 0;
    while(i < len)
    {
        stack[i + 1] = newar[i];
        i++;
    }
}