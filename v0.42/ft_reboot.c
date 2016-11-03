/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reboot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:38:03 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/04 11:12:04 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
** =======================================
**      	    ft_reboot.c
** 		TAKE OFF 'ltr' IN 'tab'
** =======================================
*/

int	ft_reboot(char ltr, int size, char (*tab)[size])
{
	t_point	co;
	int		ct;

	co.x = -1;
	ct = 0;
	while (++co.x < size && ct < 4)
	{
		co.y = -1;
		while (++co.y < size && ct < 4)
			if (tab[co.x][co.y] == ltr)
			{
				tab[co.x][co.y] = '.';
				++ct;
			}
	}
	return (1);
}
