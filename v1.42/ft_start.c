/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 10:43:36 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/29 16:11:07 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"
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
	char	*buf;
	t_inv	*move;

	if (!(buf = (char *)malloc(sizeof(*buf) * BUF_SIZE)))
		ft_exit();
	if (!(move = malloc(sizeof(*move))))
		ft_exit();
	SIZE = 2;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_exit();
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (buf[0] == '\0' || ft_strlen(buf) > 545 || close(fd) == -1)
		ft_exit();
	if (ft_checkbuf(buf, 0, 0) == 0)
	{
		ft_decode(buf, move);
		free(buf);
		ft_fillit(move);
	}
	return (0);
}
