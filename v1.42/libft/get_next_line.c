/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 14:32:35 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/07 11:52:43 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_do(t_li *list)
{
	char	*rtr;
	size_t	i;

	i = 0;
	if (!(rtr = (char *)malloc(sizeof(*rtr) * BUFF_SIZE)))
		return (NULL);
	ft_strclr(rtr);
	if (*list->mess == '\n')
		++list->mess;
	while (*list->mess != '\n' && *list->mess && *list->mess != EOF)
	{
		rtr[i++] = *list->mess;
		++list->mess;
	}
	rtr[i] = '\0';
	free(rtr);
	return (rtr);
}

static void		ft_copie(int ret, char *s1, char *s2)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		++i;
	while (j < ret)
		s1[i++] = s2[j++];
	s1[i] = '\0';
}

static char		*ft_buf(int fd)
{
	char	*buf;
	char	*str;
	int		ret;
	int		i;

	i = 0;
	ret = 42;
	if (!(buf = (char *)malloc(sizeof(*buf) * BUFF_SIZE)) ||
		!(str = (char *)malloc(sizeof(*str) * 4096)))
		return (NULL);
	str[0] = '\0';
	while (ret > 0)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		ft_copie(ret, str, buf);
		i += ret;
	}
	if (ret < 0)
		return (NULL);
	str[i] = '\0';
	return (str);
}

static t_li		*ft_find(int fd, t_li *list)
{
	t_li	*new;

	while (list->next != NULL && list->fd != fd)
		list = list->next;
	if (list->next == NULL && list->fd != fd)
	{
		if (!(new = malloc(sizeof(*list))))
			return (NULL);
		new->fd = fd;
		new->next = NULL;
		list->next = new;
		new->first = list->first;
		new->mess = ft_buf(fd);
		return (new);
	}
	return (list);
}

int				get_next_line(int const fd, char **line)
{
	static t_li	*list;

	if (fd < 0 || BUFF_SIZE == 0 || line == NULL || *line == NULL)
		return (-1);
	if (!list)
	{
		if (!(list = malloc(sizeof(*list))))
			return (-1);
		list->fd = fd;
		list->next = NULL;
		list->first = list;
		list->mess = ft_buf(fd);
	}
	else
		list = list->first;
	if (list->fd != fd)
		list = ft_find(fd, list);
	if (list->mess == NULL)
		return (-1);
	*line = ft_do(list);
	if (*line == NULL)
		return (-1);
	if (*list->mess == '\n')
		return (1);
	return (0);
}
