/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filling.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 13:51:55 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/04 11:31:19 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
**	REPLACE 'end' BY 'tab'
*/

static void	ft_replacend(int size, char (*tab)[size], char (*end)[size])
{
	t_point	co;

	if (ft_checkend('A', size, end, tab) == 0)
	{
		co.x = -1;
		while (++co.x < size)
		{
			co.y = -1;
			while (++co.y < size)
				end[co.x][co.y] = tab[co.x][co.y];
		}
	}
}

/*
**	MAKE BACKTRACKING
**	CHECK IF VALID 'tab' < 'end'
*/

int			ft_filling(t_inv *iv, int posi, char (*tab)[SIZE],
					char (*end)[SIZE])
{
	if (ft_backtrack(iv, posi, tab, end) == 1)
	{
		ft_reboot(LTR, SIZE, tab);
		--LTR;
		if (posi < (SIZE * SIZE - 1))
			return (ft_filling(iv, ++posi, tab, end));
		else if (ft_onlyp(SIZE, end) == 1 && LTR + 1 == 'A')
		{
			++SIZE;
			ft_rebootbuf(&(BUF), 0);
			return (ft_fillit(iv));
		}
	}
	else
	{
		ft_replacend(SIZE, tab, end);
		if (posi < (SIZE * SIZE - 1))
		{
			ft_rebootbuf(&(BUF), 420);
			--LTR;
			return (ft_filling(iv, ++posi, tab, end));
		}
	}
	ft_reboot(++LTR + 1, SIZE, tab);
	return (1);
}
