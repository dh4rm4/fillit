/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 15:42:57 by kboddez           #+#    #+#             */
/*   Updated: 2016/03/14 11:05:09 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
** =======================================
**          	ft_checkend.c
**			  CHECK IF tab < end
** =======================================
*/

int	ft_checkend(char ltr, int size, char (*end)[size], char (*tab)[size])
{
	t_point	co;

	co.x = -1;
	if (ft_onlyp(size, end) == 1)
		return (0);
	while (++co.x < size)
	{
		co.y = -1;
		while (++co.y < size)
		{
			if (end[co.x][co.y] == ltr && tab[co.x][co.y] != ltr)
				return (1);
			if (end[co.x][co.y] != ltr && tab[co.x][co.y] == ltr)
				return (0);
		}
	}
	return (ft_checkend(++ltr, size, end, tab));
}
