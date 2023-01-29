#include "push_swap.h"

int is_sorted(int *stack)
{
    int i;

    i = 1;
    while(stack[i])
    {
        if(stack[i - 1] > stack[i])
            return 1;
        i++;
    }
    return 0;
}