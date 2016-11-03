/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seven.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 13:05:22 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/29 15:41:14 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

/*
**	PLACES IF POSSIBLE THE TETRNIOS No'7 INTO 'tab'
*/

int	ft_seven(t_point co, t_inv *move, char (*tab)[SIZE], char (*end)[SIZE])
{
	if (ft_valid(co.x, co.y, SIZE, tab) == 1 ||
		ft_valid(co.x, co.y + 1, SIZE, tab) == 1 ||
		ft_valid(co.x, co.y + 2, SIZE, tab) == 1 ||
		ft_valid(co.x + 1, co.y, SIZE, tab) == 1)
		return (1);
	tab[co.x][co.y] = LTR;
	tab[co.x][co.y + 1] = LTR;
	tab[co.x][co.y + 2] = LTR;
	tab[co.x + 1][co.y] = LTR;
	if (TAB[T + 1] == 0)
		return (0);
	++T;
	return (ft_backtrack_step1(move, 0, tab, end));
}
