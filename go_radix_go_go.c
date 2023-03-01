/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:10:27 by macos             #+#    #+#             */
/*   Updated: 2023/02/11 23:11:52 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setflag(t_data **stack)
{
	t_data	*tmp;

	tmp = *stack;
	while (tmp)
	{
		tmp->flag = -1;
		tmp = tmp->next;
	}
}

static t_data	*find_another_min(t_data **stack)
{
	t_data	*tmp;
	t_data	*min;
	int		sign;

	tmp = *stack;
	min = NULL;
	sign = 0;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if ((tmp->flag == -1) && (!sign || tmp->content < min->content))
		{
			sign = 1;
			min = tmp;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	stacknflag(t_data **stack)
{
	t_data	*tmp;
	int		i;

	i = 0;
	tmp = find_another_min(stack);
	while (tmp)
	{
		tmp->flag = i++;
		tmp = find_another_min(stack);
	}
}

void	go_radix_go_go(t_data **a_list, t_data **b_list)
{
	int		i;
	int		j;
	int		len;

	len = stacklen(a_list);
	i = 0;
	stacknflag(a_list);
	while (!issorted(a_list))
	{
		j = -1;
		while (++j < len)
		{
			if ((((*a_list)->flag >> i) & 1) == 1)
				ra(a_list);
			else
				pb(a_list, b_list);
		}
		while (*b_list)
			pa(b_list, a_list);
		i++;
	}
}
