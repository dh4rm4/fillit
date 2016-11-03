/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_bis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 16:10:23 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/04 11:45:08 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
** =======================================
**            ft_place_bis.c
**			FIND A VALID PLACE
** =======================================
*/

static void	ft_secundo(char *buf, t_point *co, t_inv *iv,
					char (*tab)[SIZE])
{
	if (ft_nbrltr(LTR, SIZE, tab) == 3)
		while (Y + 1 != SIZE && ft_side_final(LTR, *co, SIZE, tab) != 0)
			++(Y);
	else if ((*(buf - 5) & *(buf - 4) & *(buf + 1) & *(buf + 2)) == '#')
		while (Y + 1 != SIZE && tab[X - 1][Y] != LTR)
			++(Y);
	else if ((*(buf - 3) & *(buf + 1) & *(buf + 2) & *buf) == '#')
		while (Y + 1 != SIZE && tab[X - 1][Y + 2] != LTR)
			++(Y);
	else if ((*(buf - 5) & *(buf - 4) & *buf & *(buf + 1)) == '#')
		while (tab[X - 1][Y] != LTR && Y + 1 < SIZE)
			++(Y);
	else
		while (Y + 1 != SIZE && ft_side_final(LTR, *co, SIZE, tab) != 0)
			++(Y);
	if ((Y - 1 > 0 && tab[X - 1][Y] != LTR) || (*buf != '#' && Y + 1 == SIZE))
		--(Y);
}

void		ft_place_bis(char *buf, t_point *co, t_inv *iv,
						char (*tab)[SIZE])
{
	if ((*(buf - 4) != '#' || ((*(buf - 5) & *(buf - 4)) == '#'))
		&& !((*buf & *(buf - 3)) == '#'))
		ft_secundo(buf, co, iv, tab);
	else if ((*(buf - 3) & *(buf + 1) & *(buf + 2) & *buf) == '#')
		while (Y + 1 != SIZE && tab[X - 1][Y + 2] != LTR)
			++(Y);
	else if (*(buf - 4) == '#')
		while (tab[X - 1][Y + 1] != LTR &&
			*(buf - 5) != '#' && Y < SIZE)
			++(Y);
	else
		while (tab[X - 1][Y] != LTR && Y < SIZE)
			++(Y);
}
