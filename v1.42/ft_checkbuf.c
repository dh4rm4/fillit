/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkbuf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 11:41:30 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/29 16:13:13 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

/*
** =======================================
**			  ft_checkbuf.c
** CHECK LA VALIDITE DES TETRINOS DANS BUF
** =======================================
*/

/*
** CHECK LA LARGEUR APRES UNE LIGNE (=1er '\n' rencontre)
*/

static int	ft_cwidth(int *width, int *heigth)
{
	if (*width != 4 || *heigth == 4)
		ft_exit();
	++(*heigth);
	*width = -1;
	return (0);
}

/*
** CHECK A LA FIN D'UN TETRINOS (REMISE A ZERO DES CHECKERS)
*/

static void	ft_reloadd(int *width, int *heigth, int *htag)
{
	if (*htag != 4)
		ft_exit();
	*width = -1;
	*heigth = 0;
	*htag = 0;
}

/*
** CHECK LE NBR DE '#'
*/

static int	ft_sign(int *htag, int i, char *buf)
{
	if (buf[i] == '#')
	{
		if (ft_side_buf(i, buf) == 1)
			ft_exit();
		++(*htag);
	}
	if (*htag > 4)
		ft_exit();
	return (0);
}

int			ft_checkbuf(char *buf, int heigth, int width)
{
	int	i;
	int	htag;

	i = -1;
	htag = 0;
	while (buf[++i] != '\0')
	{
		if (buf[i] == '.' || buf[i] == '#')
			if (ft_sign(&htag, i, buf) == 1)
				return (1);
		if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
			ft_exit();
		if (heigth > 4 || (buf[i] == '\n' && buf[i - 1] == '\n'
						&& heigth <= 3))
			ft_exit();
		if (buf[i] == '\n' && buf[i - 1] == '\n' && buf[i + 1] != '\0')
			ft_reloadd(&width, &heigth, &htag);
		else if (buf[i] == '\n' || buf[i + 1] == '\0')
			ft_cwidth(&width, &heigth);
		++width;
	}
	if (htag != 4)
		ft_exit();
	return (0);
}
