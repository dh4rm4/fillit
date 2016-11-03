/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onlyp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 15:31:26 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/27 14:28:55 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

/*
** =======================================
**            ft_onkyp.c
**      CHECK IF end IS EMPTY
** =======================================
*/

int	ft_onlyp(int size, char (*end)[size])
{
	t_point	co;

	co.y = -1;
	while (++co.y < size)
	{
		co.x = -1;
		while (++co.x < size)
		{
			if (end[co.x][co.y] >= 'A' && end[co.x][co.y] <= 'Z')
				return (0);
		}
	}
	return (1);
}
