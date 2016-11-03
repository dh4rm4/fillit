/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_side_buf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 16:16:47 by kboddez           #+#    #+#             */
/*   Updated: 2016/03/12 15:37:06 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

/*
** =======================================
**            ft_side_buf.c
**   CHECK IF buf[i] HAS VALID SIDES
** =======================================
*/

/*
**	FINALDE SIDE CHECK
*/

static int	ft_near(int i, char *buf)
{
	int	side;

	side = 0;
	if (buf[i + 1] == '#' && i + 1 < 546)
		++side;
	if (buf[i - 1] == '#' && i - 1 >= 0)
		++side;
	if (buf[i + 5] == '#' && i + 5 < 546)
		++side;
	if (buf[i - 5] == '#' && i - 5 >= 0)
		++side;
	if (side <= 1)
		return (1);
	return (0);
}

/*
**  CHECK IF ltr NEAR tab[x][y] HAVE VALID SIDES
*/

static int	ft_side_bis(int i, char *buf)
{
	if (buf[i + 1] == '#' && i + 1 < 546 && ft_near(i + 1, buf) == 0)
		return (0);
	if (buf[i - 1] == '#' && i - 1 >= 0 && ft_near(i - 1, buf) == 0)
		return (0);
	if (buf[i + 5] == '#' && i + 5 < 546 && ft_near(i + 5, buf) == 0)
		return (0);
	if (buf[i - 5] == '#' && i - 5 >= 0 && ft_near(i - 5, buf) == 0)
		return (0);
	return (1);
}

int			ft_side_buf(int i, char *buf)
{
	int	side;

	side = 0;
	if (buf[i + 1] == '#' && i + 1 < 546)
		++side;
	if (buf[i - 1] == '#' && i - 1 >= 0)
		++side;
	if (buf[i + 5] == '#' && i + 5 < 546)
		++side;
	if (buf[i - 5] == '#' && i - 5 >= 0)
		++side;
	if (side == 1)
		return (ft_side_bis(i, buf));
	if (side == 0)
		return (1);
	return (0);
}
