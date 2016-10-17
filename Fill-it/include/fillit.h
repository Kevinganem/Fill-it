/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 16:49:06 by kganem            #+#    #+#             */
/*   Updated: 2016/10/17 17:31:33 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"

typedef struct		s_point
{
	short			x;
	short			y;
}					t_point;

typedef struct		s_tetris
{
	char			name;
	t_point			coord[4];
}					t_tetris;

typedef struct		s_conf
{
	char			**grid;
	short			min_size;
	char			nbr_piece;
	struct s_tetris	list_tetris[26];
}					t_conf;

t_conf				*open_file(char *file, t_conf *conf);
t_conf				*read_file(int *fd, t_conf *conf);
void				fillit(int *argc, char **argv);
t_tetris			*create_tetris(char *str, char name);
void				create_tetris_coord(t_tetris *tetris, int nbr, int i);
t_tetris			*check_tetris(t_tetris *tetris);
char				check_tetris_form(t_tetris *tetris);
t_tetris			*init_tetris(char name);
t_tetris			*order_tetris(t_tetris *tetris);
t_conf				*init_conf();
void				ft_print_grid(char **tab);
char				**ft_new_grid(short nb_piece);
void				ft_del_grid(char ***grid);
void				ft_clean_grid(char **grid, char letter);
void				ft_put_piece(char **grid, t_point *start, t_tetris *piece);
t_point				*ft_new_point(int x, int y);
short				ft_is_putable(char **grid, t_point *start, t_tetris *piece);
char				**ft_copy_grid(char **grid, short len);
t_point				*ft_give_next_point(t_point *start, char **grid);
char				ft_grid_isfull(char **grid);
int					brain_rec(t_conf *conf, t_point *pos,
char				**grid, int iter);
void				algo(t_conf *config);

#endif
