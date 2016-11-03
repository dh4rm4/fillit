/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 17:32:38 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/29 16:13:53 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

static int	ft_secundo(t_point co, t_inv *move, char (*tab)[SIZE],
					char (*end)[SIZE])
{
	if (TAB[T] == 11)
		return (ft_eleven(co, move, tab, end));
	else if (TAB[T] == 12)
		return (ft_twelve(co, move, tab, end));
	else if (TAB[T] == 13)
		return (ft_thirteen(co, move, tab, end));
	else if (TAB[T] == 14)
		return (ft_fourteen(co, move, tab, end));
	else if (TAB[T] == 15)
		return (ft_fifteen(co, move, tab, end));
	else if (TAB[T] == 16)
		return (ft_sixteen(co, move, tab, end));
	else if (TAB[T] == 17)
		return (ft_seventeen(co, move, tab, end));
	else if (TAB[T] == 18)
		return (ft_eighteen(co, move, tab, end));
	else if (TAB[T] == 19)
		return (ft_nineteen(co, move, tab, end));
	return (1);
}

int			ft_resolve(t_point co, t_inv *move, char (*tab)[SIZE],
					char (*end)[SIZE])
{
	if (TAB[T] > 10)
		return (ft_secundo(co, move, tab, end));
	if (TAB[T] == 1)
		return (ft_one(co, move, tab, end));
	else if (TAB[T] == 2)
		return (ft_two(co, move, tab, end));
	else if (TAB[T] == 3)
		return (ft_three(co, move, tab, end));
	else if (TAB[T] == 4)
		return (ft_four(co, move, tab, end));
	else if (TAB[T] == 5)
		return (ft_five(co, move, tab, end));
	else if (TAB[T] == 6)
		return (ft_six(co, move, tab, end));
	else if (TAB[T] == 7)
		return (ft_seven(co, move, tab, end));
	else if (TAB[T] == 8)
		return (ft_eight(co, move, tab, end));
	else if (TAB[T] == 9)
		return (ft_nine(co, move, tab, end));
	else if (TAB[T] == 10)
		return (ft_ten(co, move, tab, end));
	return (1);
}
