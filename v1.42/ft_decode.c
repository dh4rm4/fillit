/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numTet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 14:07:20 by kboddez           #+#    #+#             */
/*   Updated: 2016/08/11 12:23:20 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

/*
**	IF op == 42 :
**		increments 'i' until buf[i] == '#' : 3 times
**	ELSE
**		find the next '#'
*/

static void		ft_next(int op, int *i, char *buf)
{
	int	t;

	if (op == 42)
	{
		t = -1;
		while (buf[*i] && t < 2)
		{
			++(*i);
			if (buf[*i] == '#')
				++t;
		}
	}
	else
		while (buf[*i] != '#' && buf[*i])
			++(*i);
}

/*
**	ASSOCIATE THE TETRINOS WITH THE RIGHT NUMBER
**	IF buf[i + 1] == '#'
*/

static void		ft_plus_one(int i, int *t, char *buf, t_inv *move)
{
	if (buf[i + 2] == '#' && buf[i + 3] == '#')
		TAB[(*t)++] = 15;
	else if (buf[i + 5] == '#' && buf[i + 6] == '#')
		TAB[(*t)++] = 1;
	else if (buf[i + 2] == '#' && buf[i + 6] == '#')
		TAB[(*t)++] = 2;
	else if (buf[i + 2] == '#' && buf[i + 7] == '#')
		TAB[(*t)++] = 6;
	else if (buf[i + 2] == '#' && buf[i + 5] == '#')
		TAB[(*t)++] = 7;
	else if (buf[i + 6] == '#' && buf[i + 7] == '#')
		TAB[(*t)++] = 12;
	else if (buf[i + 4] == '#' && buf[i + 5] == '#')
		TAB[(*t)++] = 13;
	else if (buf[i + 5] == '#' && buf[i + 10] == '#')
		TAB[(*t)++] = 17;
	else if (buf[i + 6] == '#' && buf[i + 11] == '#')
		TAB[(*t)++] = 16;
}

/*
**	ASSOCIATE THE TETRINOS WITH THE RIGHT NUMBER
**	IF buf[i + 5] == '#'
*/

static void		ft_plus_five(int i, int *t, char *buf, t_inv *move)
{
	if (buf[i + 6] == '#' && buf[i + 7] == '#')
		TAB[(*t)++] = 9;
	else if (buf[i + 6] == '#' && buf[i + 11] == '#')
		TAB[(*t)++] = 10;
	else if (buf[i + 9] == '#' && buf[i + 10] == '#')
		TAB[(*t)++] = 19;
	else if (buf[i + 10] == '#' && buf[i + 11] == '#')
		TAB[(*t)++] = 18;
	else if (buf[i + 6] == '#' && buf[i + 10] == '#')
		TAB[(*t)++] = 4;
	else if (buf[i + 10] == '#' && buf[i + 15] == '#')
		TAB[(*t)++] = 14;
}

/*
**	ASSOCIATE THE TETRINOS WITH THE RIGHT NUMBER
**	IF buf[i + 4] == '#'
*/

static void		ft_plus_four(int i, int *t, char *buf, t_inv *move)
{
	if (buf[i + 5] == '#' && buf[i + 6] == '#')
		TAB[(*t)++] = 3;
	else if (buf[i + 3] == '#' && buf[i + 5] == '#')
		TAB[(*t)++] = 8;
	else if (buf[i + 5] == '#' && buf[i + 10] == '#')
		TAB[(*t)++] = 5;
	else if (buf[i + 5] == '#' && buf[i + 9] == '#')
		TAB[(*t)++] = 11;
}

void			ft_decode(char *buf, t_inv *move)
{
	int	i;
	int	t;

	i = -1;
	t = 0;
	while (buf[++i])
	{
		ft_next(0, &i, buf);
		if (buf[i + 1] == '#')
			ft_plus_one(i, &t, buf, move);
		else if (buf[i + 4] == '#')
			ft_plus_four(i, &t, buf, move);
		else if (buf[i + 5] == '#')
			ft_plus_five(i, &t, buf, move);
		ft_next(42, &i, buf);
	}
	TAB[t] = 0;
}
