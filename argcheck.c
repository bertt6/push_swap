#include "push_swap.h"

void	check_argum(t_data **stack)
{
	t_data	*tmp;

	while ((*stack)->next != NULL)
	{
		tmp = (*stack)->next;
		while (tmp)
		{
			if ((*stack)->content == tmp -> content)
				put_error("duplicated");
			tmp = tmp -> next;
		}
		stack = &(*stack)->next;
	}
}
