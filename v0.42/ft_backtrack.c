/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 17:43:04 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/04 11:40:53 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
** =======================================
**            ft_backtrack.c
**  		FILLIT DEPUIS POSI
** =======================================
*/

/*
** CHECK POSI ET REPLACE 'X' AND 'Y'
*/

static void	ft_posi(int size, int *posi, t_point *co)
{
	if (*posi < size)
	{
		Y = *posi;
		X = 0;
	}
	else
	{
		X = *posi / size;
		Y = *posi % size;
	}
}

int			ft_backtrack(t_inv *iv, int posi, char (*tab)[SIZE],
						char (*end)[SIZE])
{
	t_point	co;

	++LTR;
	ft_posi(SIZE, &posi, &co);
	ft_movestart(&(BUF));
	while ((*(BUF) != '\n' || *(BUF - 1) != '\n') && *BUF)
	{
		if (co.x != 0 && *(BUF - 1) == '\n' && ft_nbrltr(LTR, SIZE, tab) != 4)
			ft_move(&(BUF));
		if (co.y == 0 && co.x != 0 && ft_nbrltr(LTR, SIZE, tab) != 0)
			ft_place_bis(BUF, &co, iv, tab);
		if (*(BUF) == '#')
		{
			if (co.y >= SIZE || co.x >= SIZE || tab[co.x][co.y] != '.')
			{
				if (posi + 1 < SIZE * SIZE)
					ft_rebootbuf(&(BUF), 420);
				return (1);
			}
			tab[co.x][co.y] = LTR;
		}
		ft_reload(*BUF, &co);
		++BUF;
	}
	return (ft_transit(iv, tab, end));
}
