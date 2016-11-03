/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfil.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 11:11:28 by kboddez           #+#    #+#             */
/*   Updated: 2016/08/14 13:42:08 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# define LIBFIL_H
# define BUF_SIZE 4096
# define SIZE move->size
# define LTR move->ltr
# define X co->x
# define Y co->y
# define TAB move->tab
# define T move->t

typedef struct	s_inv
{
	int			tab[26];
	int			size;
	char		ltr;
	int			t;
}				t_inv;

typedef struct	s_point
{
	int	x;
	int	y;
}				t_point;

int				ft_start(char *file);
int				ft_checkbuf(char *buf, int heigth, int width);
void			ft_exit(void);
int				ft_backtrack_step1(t_inv *move, int posi, char (*tab)[SIZE],
						char (*end)[SIZE]);
void			ft_replace(int size, char (*tab)[size]);
int				ft_fillit(t_inv *move);
int				ft_backtrack_step2(t_inv *move, int posi, char (*tab)[SIZE],
							char (*end)[SIZE]);
void			ft_print_end(int size, char tab[size][size]);
int				ft_onlyp(int size, char (*end)[size]);
int				ft_checktab(int size, char (*tab)[size]);
char			ft_initltr(int size, char (*tab)[size]);
int				ft_reboot(char ltr, int size, char (*tab)[size]);
int				ft_checkend(char ltr, int size, char (*end)[size],
							char (*tab)[size]);
int				ft_side_buf(int i, char *buf);
int				ft_transit(t_inv *move, char (*tab)[SIZE], char (*end)[SIZE]);
void			ft_decode(char *buf, t_inv *move);
int				ft_valid(int x, int y, int size, char (*tab)[size]);
int				ft_resolve(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_one(t_point co, t_inv *move, char (*tab)[SIZE],
					char (*end)[SIZE]);
int				ft_two(t_point co, t_inv *move, char (*tab)[SIZE],
					char (*end)[SIZE]);
int				ft_three(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_four(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_five(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_six(t_point co, t_inv *move, char (*tab)[SIZE],
					char (*end)[SIZE]);
int				ft_seven(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_eight(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_nine(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_ten(t_point co, t_inv *move, char (*tab)[SIZE],
					char (*end)[SIZE]);
int				ft_eleven(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_twelve(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_thirteen(t_point co, t_inv *move, char (*tab)[SIZE],
							char (*end)[SIZE]);
int				ft_fourteen(t_point co, t_inv *move, char (*tab)[SIZE],
							char (*end)[SIZE]);
int				ft_fifteen(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_sixteen(t_point co, t_inv *move, char (*tab)[SIZE],
						char (*end)[SIZE]);
int				ft_seventeen(t_point co, t_inv *move, char (*tab)[SIZE],
							char (*end)[SIZE]);
int				ft_eighteen(t_point co, t_inv *move, char (*tab)[SIZE],
							char (*end)[SIZE]);
int				ft_nineteen(t_point co, t_inv *move, char (*tab)[SIZE],
							char (*end)[SIZE]);

#endif
