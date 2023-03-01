/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamli <bsamli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:11:37 by macos             #+#    #+#             */
/*   Updated: 2023/02/27 18:29:50 by bsamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"	

void	put_error(char *str)
{
	ft_putstr_fd(str, 1);
	exit(0);
}

int	find_min(t_data **a_list)
{
	t_data		*tmp;
	int			min;

	tmp = *a_list;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

void	is_sorted(t_data **stack, int ac)
{
	t_data	*tmp;
	int		i;
	int		len;

	i = 0;
	len = stacklen(stack);
	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content)
			i++;
		tmp = tmp->next;
	}
	if (i == len - 1 && ac > 2)
		exit(0);
}

int	issorted(t_data **stack)
{
	t_data	*tmp;
	int		i;
	int		len;

	i = 0;
	len = stacklen(stack);
	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content)
			i++;
		tmp = tmp->next;
	}
	if (i == len - 1)
		return (1);
	return (0);
}

int	stacklen(t_data **stack)
{
	t_data	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
