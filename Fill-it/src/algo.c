/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 16:49:33 by kganem            #+#    #+#             */
/*   Updated: 2016/10/14 17:04:02 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int				brain_rec(t_conf *conf, t_point *pos, char **grid, int iter)
{
	if (iter == conf->nbr_piece)
		return (1);
	if (pos->x < 0)
		return (0);
	if (ft_is_putable(grid, pos, &conf->list_tetris[iter]))
	{
		ft_put_piece(grid, pos, &conf->list_tetris[iter]);
		if (brain_rec(conf, ft_new_point(0, 0), grid, iter + 1))
			return (1);
		ft_clean_grid(grid, conf->list_tetris[iter].name);
	}
	return (brain_rec(conf, ft_give_next_point(pos, grid), grid, iter));
}

void			algo(t_conf *conf)
{
	char		**grid;
	t_point		*pos;

	pos = ft_new_point(0, 0);
	conf->min_size = 2;
	grid = ft_new_grid(conf->min_size);
	while (!(brain_rec(conf, pos, grid, 0)))
	{
		conf->min_size++;
		grid = ft_new_grid(conf->min_size);
	}
	conf->grid = ft_copy_grid(grid, conf->min_size);
}
