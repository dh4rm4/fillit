/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack_step1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 11:14:33 by kboddez           #+#    #+#             */
/*   Updated: 2016/08/11 14:42:20 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

/*
**	REPLACE 'end' BY 'tab'
*/

static void	ft_replacend(int size, char (*tab)[size], char (*end)[size])
{
	t_point	co;

	if (ft_checkend('A', size, end, tab) == 0)
	{
		co.y = -1;
		while (++co.y < size)
		{
			co.x = -1;
			while (++co.x < size)
				end[co.x][co.y] = tab[co.x][co.y];
		}
	}
}

/*
**	MAKE BACKTRACKING
**	CHECK IF VALID 'tab' < 'end'
*/

int			ft_backtrack_step1(t_inv *move, int posi, char (*tab)[SIZE],
					char (*end)[SIZE])
{
	if (ft_backtrack_step2(move, posi, tab, end) == 1)
	{
		ft_reboot(LTR, SIZE, tab);
		--LTR;
		if (posi < (SIZE * SIZE - 1))
			return (ft_backtrack_step1(move, ++posi, tab, end));
		else if (ft_onlyp(SIZE, end) == 1 && LTR + 1 == 'A')
		{
			++SIZE;
			return (ft_fillit(move));
		}
	}
	else
	{
		ft_replacend(SIZE, tab, end);
		if (posi < (SIZE * SIZE - 1))
		{
			T -= 2;
			ft_reboot(LTR, SIZE, tab);
			return (ft_backtrack_step1(move, ++posi, tab, end));
		}
	}
	ft_reboot(LTR + 1, SIZE, tab);
	--T;
	return (1);
}
