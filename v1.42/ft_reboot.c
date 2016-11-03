/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reboot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:38:03 by kboddez           #+#    #+#             */
/*   Updated: 2016/08/14 11:57:12 by lfabbro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

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

	co.y = -1;
	ct = 0;
	while (++co.y < size && ct < 4)
	{
		co.x = -1;
		while (++co.x < size && ct < 4)
			if (tab[co.x][co.y] == ltr)
			{
				tab[co.x][co.y] = '.';
				++ct;
			}
	}
	return (1);
}
