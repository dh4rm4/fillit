/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack_step2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 11:14:47 by kboddez           #+#    #+#             */
/*   Updated: 2016/08/10 11:14:50 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

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

int			ft_backtrack_step2(t_inv *move, int posi, char (*tab)[SIZE],
						char (*end)[SIZE])
{
	t_point	co;

	++LTR;
	ft_posi(SIZE, &posi, &co);
	return (ft_resolve(co, move, tab, end));
}
