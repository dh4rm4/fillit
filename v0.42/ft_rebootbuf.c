/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rebootbuf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 13:43:38 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/04 10:59:26 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"

/*
**	REBOOT 'buf' UNTIL HIS BEGINNING (if i == 0)
**	OR THE SECOND LAST TETRINOS if (i == 42)
**	OR THE LAST TETRINOS (if i != 0)
*/

void	ft_rebootbuf(char **buf, int i)
{
	int	check;

	check = 2;
	if (i == 0)
		while (*(*buf - 1))
			--(*buf);
	else if (i == 42)
		while (*(*buf - 1) && check != 0)
		{
			if (*(*buf - 1) == '\n' && *(*buf - 2) == '\n')
				--check;
			--(*buf);
		}
	else
		while (*(*buf - 1) && (*(*buf - 1) != '\n' || *(*buf - 2) != '\n'))
			--(*buf);
}
