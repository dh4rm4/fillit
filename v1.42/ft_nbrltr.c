/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrltr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 12:37:03 by kboddez           #+#    #+#             */
/*   Updated: 2016/01/29 12:42:17 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

/*
** =======================================
**            ft_nbrltr.c
**  	CHECK OCCURENCE NBR OF ltr
** =======================================
*/

int	ft_nbrltr(char ltr, int size, char (*tab)[size])
{
	int		n;
	t_point	co;

	n = 0;
	co.x = -1;
	while (++co.x < size)
	{
		co.y = -1;
		while (++co.y < size)
		{
			if (tab[co.x][co.y] == ltr)
				++n;
		}
	}
	return (n);
}
