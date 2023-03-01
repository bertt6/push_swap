/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamli <bsamli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:08:36 by macos             #+#    #+#             */
/*   Updated: 2023/02/27 18:30:45 by bsamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_argum(t_data **stack)
{
	t_data	*tmp;

	while ((*stack)->next != NULL)
	{
		tmp = (*stack)->next;
		while (tmp)
		{
			if ((*stack)->content == tmp->content)
				put_error("error");
			tmp = tmp->next;
		}
		stack = &(*stack)->next;
	}
}
