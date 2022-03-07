/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:45:28 by crtoefin          #+#    #+#             */
/*   Updated: 2022/03/07 13:45:32 by crtoefin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	go_move_1(t_stack *a, t_stack *b, t_move move)
{
	operation_n(a, lst_rotate, move.ra);
	operation_n(b, lst_rotate, move.rb);
	if (move.ra <= move.rb)
	{
		ft_write_n("rr\n", move.ra);
		ft_write_n("rb\n", move.rb - move.ra);
	}
	else
	{
		ft_write_n("rr\n", move.rb);
		ft_write_n("ra\n", move.ra - move.rb);
	}
	lst_push(b, a);
	write(1, "pa\n", 3);
}

void	go_move_2(t_stack *a, t_stack *b, t_move move)
{
	operation_n(a, lst_rotate, move.ra);
	ft_write_n("ra\n", move.ra);
	operation_n(b, lst_rev_rotate, move.rrb);
	ft_write_n("rrb\n", move.rrb);
	lst_push(b, a);
	write(1, "pa\n", 3);
}

void	go_move_3(t_stack *a, t_stack *b, t_move move)
{
	operation_n(a, lst_rev_rotate, move.rra);
	ft_write_n("rra\n", move.rra);
	operation_n(b, lst_rotate, move.rb);
	ft_write_n("rb\n", move.rb);
	lst_push(b, a);
	write(1, "pa\n", 3);
}

void	go_move_4(t_stack *a, t_stack *b, t_move move)
{
	operation_n(a, lst_rev_rotate, move.rra);
	operation_n(b, lst_rev_rotate, move.rrb);
	if (move.rra <= move.rrb)
	{
		ft_write_n("rrr\n", move.rra);
		ft_write_n("rrb\n", move.rrb - move.rra);
	}
	else
	{
		ft_write_n("rrr\n", move.rrb);
		ft_write_n("rra\n", move.rra - move.rrb);
	}
	lst_push(b, a);
	write(1, "pa\n", 3);
}
