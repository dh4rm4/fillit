/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fourteen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 13:11:50 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/29 15:42:23 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

/*
**	PLACES IF POSSIBLE THE TETRNIOS No'14 INTO 'tab'
*/

int	ft_fourteen(t_point co, t_inv *move, char (*tab)[SIZE], char (*end)[SIZE])
{
	if (ft_valid(co.x, co.y, SIZE, tab) == 1 ||
		ft_valid(co.x + 1, co.y, SIZE, tab) == 1 ||
		ft_valid(co.x + 2, co.y, SIZE, tab) == 1 ||
		ft_valid(co.x + 3, co.y, SIZE, tab) == 1)
		return (1);
	tab[co.x][co.y] = LTR;
	tab[co.x + 1][co.y] = LTR;
	tab[co.x + 2][co.y] = LTR;
	tab[co.x + 3][co.y] = LTR;
	if (TAB[T + 1] == 0)
		return (0);
	++T;
	return (ft_backtrack_step1(move, 0, tab, end));
}
