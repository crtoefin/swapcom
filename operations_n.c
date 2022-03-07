/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:44:37 by crtoefin          #+#    #+#             */
/*   Updated: 2022/03/07 13:44:44 by crtoefin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_n(t_stack *stack, void (*f)(t_stack *), int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		f(stack);
		i++;
	}
}

void	rotate_n(t_stack *stack, int n)
{
	if (n - ((stack->len) / 2) - ((stack->len) % 2) > 0)
	{
		n = stack->len - n + 1;
		operation_n(stack, lst_rev_rotate, n);
		ft_write_n("rra\n", n);
	}
	else
	{
		n = n - 1;
		operation_n(stack, lst_rotate, n);
		ft_write_n("ra\n", n);
	}
}

void	ft_write_n(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, str, ft_strlen(str));
		i++;
	}
}
