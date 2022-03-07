/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:46:19 by crtoefin          #+#    #+#             */
/*   Updated: 2022/03/07 13:46:22 by crtoefin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

long int	get_nbr(char *nptr)
{
	long int	i;
	int			sign;

	i = 0;
	sign = 1;
	while (*nptr == ' ')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr)
	{
		if (!ft_isdigit(*nptr))
			ft_exit_error();
		i = i * 10 + (*nptr - 48);
		nptr++;
	}
	i = i * sign;
	if (i > INT32_MAX || i < INT32_MIN)
		ft_exit_error();
	return (i);
}

void	check_value(int *array, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len - 1)
	{
		if (*(array + i) == *(array + i + 1))
			ft_exit_error();
		i++;
	}
}
