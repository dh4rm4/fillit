/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reload.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 11:44:26 by kboddez           #+#    #+#             */
/*   Updated: 2016/03/14 11:14:27 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
** =======================================
**            	ft_reload.c
**             ++j && k = 0
** =======================================
*/

void	ft_reload(char b, t_point *co)
{
	if (b != '\n')
		++(co->y);
	else
	{
		++(co->x);
		co->y = 0;
	}
}
