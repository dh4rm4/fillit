/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 10:43:36 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/04 11:05:49 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfil.h"
#include <fcntl.h>

/*
** =======================================
**            ft_start.c
** 	  BEGIN FILLIT - BUF CREATOR
** 	  CHECK FILE < 26 TETRINOS
** =======================================
*/

int	ft_start(char *file)
{
	int		fd;
	int		ret;
	t_inv	*iv;

	if (!(iv = malloc(sizeof(*iv))) ||
		!(BUF = (char *)malloc(sizeof(*BUF) * BUF_SIZE)))
		ft_exit();
	SIZE = 2;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_exit();
	ret = read(fd, BUF, BUF_SIZE);
	BUF[ret] = '\0';
	if (BUF[0] == '\0' || ft_strlen(BUF) > 545)
		ft_exit();
	if (ft_checkbuf(BUF, 0, 0) == 0)
		ft_fillit(iv);
	if (close(fd) == -1)
		ft_exit();
	return (0);
}
