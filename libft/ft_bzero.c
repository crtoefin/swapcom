/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:50:27 by crtoefin          #+#    #+#             */
/*   Updated: 2021/10/25 17:30:50 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*si;
	size_t	i;

	si = (char *)s;
	i = 0;
	while (i < n)
	{
		si[i] = 0;
		i++;
	}
}
