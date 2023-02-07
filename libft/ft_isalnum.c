#include "../push_swap.h"

int	ft_isalnum(int *c)
{
	int	i;

	i = 0;
	if (c[0] == '-')
		i++;
	while (c[i])
	{
		if (!ft_isdigit(c[i]))
			return (0);
		i++;
	}
	return (1);
}
