/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:10:50 by macos             #+#    #+#             */
/*   Updated: 2023/02/11 23:11:46 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_data **src, t_data **dst)
{
	t_data	*temp;

	if (ft_lstsize(*src) == 0)
		return ;
	temp = *src;
	*src = (*src)->next;
	ft_lstadd_front(dst, temp);
}

void	pa(t_data **b_push, t_data **a_push)
{
	push(b_push, a_push);
	write(1, "pa\n", 3);
}

void	pb(t_data **a_push, t_data **b_push)
{
	push(a_push, b_push);
	write(1, "pb\n", 3);
}

void	pp(t_data **a_push, t_data **b_push)
{
	push(a_push, b_push);
	write(1, "pb\n", 3);
}
