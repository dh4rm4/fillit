/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 11:05:01 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/27 15:26:15 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

/*
** =======================================
**				ft_replace.
** COMPLETE "tab" WITH (SIZE * SIZE) '.'
** =======================================
*/

void	ft_replace(int size, char (*tab)[size])
{
	t_point	co;

	co.y = -1;
	while (++co.y < size)
	{
		co.x = -1;
		while (++co.x < size)
			tab[co.x][co.y] = '.';
	}
}
