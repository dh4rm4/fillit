/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 14:55:15 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/04 11:49:41 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"
#include "libft.h"

/*
**	CHECK IF THE SMALLER SQUARE IS FOUND
**	ELSE PAST TO THE NEXT TETRINOS
*/

int	ft_transit(t_inv *iv, char (*tab)[SIZE], char (*end)[SIZE])
{
	if (*(BUF) == '\0')
		return (0);
	ft_filling(iv, 0, tab, end);
	ft_reboot(LTR, SIZE, tab);
	ft_rebootbuf(&(BUF), 42);
	--LTR;
	return (1);
}
