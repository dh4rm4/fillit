/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onlyp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 15:31:26 by kboddez           #+#    #+#             */
/*   Updated: 2016/02/16 14:39:44 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
** =======================================
**            ft_onkyp.c
**      CHECK IF end IS EMPTY
** =======================================
*/

int	ft_onlyp(int size, char (*end)[size])
{
	t_point	co;

	co.x = -1;
	while (++co.x < size)
	{
		co.y = -1;
		while (++co.y < size)
		{
			if (end[co.x][co.y] >= 'A' && end[co.x][co.y] <= 'Z')
				return (0);
		}
	}
	return (1);
}
