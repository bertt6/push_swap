/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:10:40 by macos             #+#    #+#             */
/*   Updated: 2023/02/11 23:11:49 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_data **rot)
{
	t_data	*end;
	t_data	*start;

	if (ft_lstsize(*rot) < 2)
		return ;
	start = *rot;
	end = ft_lstlast(*rot);
	*rot = (*rot)->next;
	end->next = start;
	start->next = NULL;
}

void	ra(t_data **a_rot)
{
	rotate(a_rot);
	write(1, "ra\n", 3);
}

void	rb(t_data **b_rot)
{
	rotate(b_rot);
	write(1, "rb\n", 3);
}

void	rr(t_data **a_rot, t_data **b_rot)
{
	if ((ft_lstsize(*a_rot) < 2) || (ft_lstsize(*b_rot) < 2))
		return ;
	rotate(a_rot);
	rotate(b_rot);
	write(1, "rr\n", 3);
}
