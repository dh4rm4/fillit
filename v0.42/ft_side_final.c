/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_side_final.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 13:12:47 by kboddez           #+#    #+#             */
/*   Updated: 2016/03/12 15:33:52 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
** =======================================
**            ft_side_final.c
**   CHECK IF ltr HAS VALID SIDES
** =======================================
*/

/*
**	FINALDE SIDE CHECK
*/

static int	ft_near(char ltr, t_point co, int size, char (*tab)[size])
{
	int	side;

	side = 1;
	if (tab[co.x][co.y + 1] == ltr && co.y + 1 < size)
		++side;
	if (tab[co.x][co.y - 1] == ltr && co.y - 1 >= 0)
		++side;
	if (tab[co.x + 1][co.y] == ltr && co.x + 1 < size)
		++side;
	if (tab[co.x - 1][co.y] == ltr && co.x - 1 >= 0)
		++side;
	if (side <= 1)
		return (1);
	return (0);
}

/*
**  CHECK IF ltr NEAR tab[x][y] HAVE VALID SIDES
*/

static int	ft_side_bis(char ltr, t_point co, int size, char (*tab)[size])
{
	if (tab[co.x][co.y + 1] == ltr && co.y + 1 < size &&
		ft_near(ltr, co, size, tab) == 0)
		return (0);
	if (tab[co.x][co.y - 1] == ltr && co.y - 1 >= 0 &&
		ft_near(ltr, co, size, tab) == 0)
		return (0);
	if (tab[co.x + 1][co.y] == ltr && co.x + 1 < size &&
		ft_near(ltr, co, size, tab) == 0)
		return (0);
	if (tab[co.x - 1][co.y] == ltr && co.x - 1 >= 0 &&
		ft_near(ltr, co, size, tab) == 0)
		return (0);
	return (1);
}

int			ft_side_final(char ltr, t_point co, int size, char (*tab)[size])
{
	int	side;

	side = 0;
	if (tab[co.x][co.y + 1] == ltr && co.y + 1 < size)
		++side;
	if (tab[co.x][co.y - 1] == ltr && co.y - 1 >= 0)
		++side;
	if (tab[co.x + 1][co.y] == ltr && co.x + 1 < size)
		++side;
	if (tab[co.x - 1][co.y] == ltr && co.x - 1 >= 0)
		++side;
	if (side == 1)
		return (ft_side_bis(ltr, co, size, tab));
	if (side == 0)
		return (1);
	return (0);
}
