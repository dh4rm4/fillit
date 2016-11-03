/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 18:57:24 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/04 11:52:40 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
** =======================================
**            ft_print_end.c
**   	PRINT tab[size][size]
** =======================================
*/

void	ft_print_end(int size, char tab[size][size])
{
	t_point	co;

	co.x = -1;
	while (++co.x < size)
	{
		co.y = -1;
		while (++co.y < size)
			ft_putchar(tab[co.x][co.y]);
		if (co.x + 1 != size)
			ft_putchar('\n');
	}
	exit(0);
}
