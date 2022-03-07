/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_move_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:46:37 by crtoefin          #+#    #+#             */
/*   Updated: 2022/03/07 13:46:41 by crtoefin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	go_move_0_dop(t_stack *a, t_stack *b, int border)
{
	lst_rotate(b);
	if (a->begin_stack->val > border)
	{
		lst_rotate(a);
		write(1, "rr\n", 3);
	}
	else
		write(1, "rb\n", 3);
}

void	go_move_0(t_stack *a, t_stack *b, int border, int mid)
{
	if (a->begin_stack->val <= border)
	{
		lst_push(a, b);
		write(1, "pb\n", 3);
	}
	else
	{
		lst_rotate(a);
		if (b->len > 1 && b->begin_stack->val < mid)
		{
			lst_rotate(b);
			write(1, "rr\n", 3);
		}
		else
			write(1, "ra\n", 3);
	}
	if (b->len > 2 && b->begin_stack->val < mid)
		go_move_0_dop(a, b, border);
}
