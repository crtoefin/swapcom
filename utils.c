/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:47:17 by crtoefin          #+#    #+#             */
/*   Updated: 2022/03/07 13:47:21 by crtoefin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_it_sort(t_stack *a)
{
	t_list	*lst;

	lst = a->begin_stack;
	while (lst && lst->next)
	{
		if (lst->val > lst->next->val)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	redefine_stack(t_stack *stack)
{
	if ((stack->begin_stack)->val < stack->min)
		stack->min = (stack->begin_stack)->val;
	if ((stack->begin_stack)->val > stack->max)
		stack->max = (stack->begin_stack)->val;
}

int	ft_max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

int	ft_min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}
