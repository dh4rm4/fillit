/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 11:45:42 by kboddez           #+#    #+#             */
/*   Updated: 2016/04/29 15:45:03 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

int	ft_valid(int x, int y, int size, char (*tab)[size])
{
	if (tab[x][y] != '.' || x >= size || y >= size ||
		x < 0 || y < 0)
		return (1);
	return (0);
}
