/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfil.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 11:11:28 by kboddez           #+#    #+#             */
/*   Updated: 2016/08/09 10:53:41 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFIL_H
# define LIBFIL_H
# define BUF_SIZE 4096
# define SIZE iv->size
# define BUF iv->buf
# define LTR iv->ltr
# define X co->x
# define Y co->y

typedef struct	s_inv
{
	char	*buf;
	int		size;
	char	ltr;
}				t_inv;

typedef struct	s_point
{
	int	x;
	int	y;
}				t_point;

int				ft_start(char *file);
int				ft_checkbuf(char *buf, int heigth, int width);
void			ft_exit(void);
int				ft_filling(t_inv *iv, int posi, char (*tab)[SIZE],
						char (*end)[SIZE]);
void			ft_replace(int size, char (*tab)[size]);
int				ft_fillit(t_inv *iv);
int				ft_backtrack(t_inv *iv, int posi, char (*tab)[SIZE],
							char (*end)[SIZE]);
void			ft_print_end(int size, char tab[size][size]);
void			ft_reload(char b, t_point *co);
int				ft_onlyp(int size, char (*end)[size]);
int				ft_checktab(int size, char (*tab)[size]);
int				ft_side(int x, int y, int size, char (*tab)[size]);
int				ft_move(char **buf);
char			ft_initltr(int size, char (*tab)[size]);
int				ft_reboot(char ltr, int size, char (*tab)[size]);
int				ft_movestart(char **buf);
int				ft_nbrltr(char ltr, int size, char (*tab)[size]);
void			ft_place(t_point *co, int size, char (*tab)[size],
						char *buf);
int				ft_checkend(char ltr, int size, char (*end)[size],
							char (*tab)[size]);
void			ft_place_bis(char *buf, t_point *co, t_inv *iv,
							char (*tab)[SIZE]);
int				ft_side_buf(int i, char *buf);
int				ft_side_final(char ltr, t_point co, int size,
							char (*tab)[size]);
void			ft_rebootbuf(char **buf, int i);
int				ft_transit(t_inv *iv, char (*tab)[SIZE], char (*end)[SIZE]);

#endif
