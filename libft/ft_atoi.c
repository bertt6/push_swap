#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	n;
	int			c;

	c = 1;
	i = 0;
	n = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
		n = (n * 10) + (str[i++] - '0');
	if ((n > 2147483648 && c == -1)
		|| (n > 2147483647 && c == 1))
		put_error("Error");
	if ((str[i] && !ft_isdigit(str[i]) && str[i] != 10)
		|| (str[i] == '-' && !str[1]))
		put_error("Error");
	return ((int)(c * n));
}
