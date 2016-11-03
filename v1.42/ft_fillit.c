/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 11:12:35 by kboddez           #+#    #+#             */
/*   Updated: 2016/08/10 10:59:13 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"
#include <fcntl.h>

/*
** =======================================
**            ft_fillit.c
**  CREATE THE FINAL TAB (end[SIZE][SIZE])
**	CREATE THE TMP TAB (tab[SIZE][SIZE])
**			 BEGIN FILLIT
**			 PRINT FINAL
** =======================================
*/

int	ft_fillit(t_inv *move)
{
	char	tab[SIZE][SIZE];
	char	end[SIZE][SIZE];

	LTR = '@';
	ft_replace(SIZE, end);
	ft_replace(SIZE, tab);
	T = 0;
	ft_backtrack_step1(move, 0, tab, end);
	ft_print_end(SIZE, end);
	return (0);
}
