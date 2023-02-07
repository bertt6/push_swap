#include "push_swap.h"



int issspace(char *av)
{
    int i = 0;
    while(av[i])
    {
        if(av[i] == 32)
            return (1);
        i++;
    }
    return 0;
}

int witchspace(char *av)
{
    int i = 1;
    while(av[i])
    {
        while(av[i])
        {
            if(av[i] == 32)
                return i;
        }
        i++;
    }
    return 0;
}

void	put_error(char *str)
{
	ft_putstr_fd(str, 1);
	exit (0);
}
