/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetris.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 16:56:18 by kganem            #+#    #+#             */
/*   Updated: 2016/10/14 17:16:47 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_tetris		*check_tetris(t_tetris *tetris)
{
	int			i;
	t_point		*coord;

	coord = tetris->coord;
	i = -1;
	while (++i < 4)
	{
		if (coord[i].x < 0 || coord[i].x > 4 || coord[i].y < 0
				|| coord[i].y > 4)
			return (0);
	}
	if (check_tetris_form(tetris) == 0 || (tetris = order_tetris(tetris)) == 0)
		return (NULL);
	return (tetris);
}

char			check_tetris_form(t_tetris *tetris)
{
	char		border;
	t_point		*coord;
	int			i;
	int			j;

	i = -1;
	coord = tetris->coord;
	border = 16;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (i != j && ((coord[i].x + 1 == coord[j].x && coord[i].y ==
				coord[j].y) || (coord[i].x - 1 == coord[j].x && coord[i].y ==
				coord[j].y) || (coord[i].x == coord[j].x && coord[i].y + 1 ==
				coord[j].y) || (coord[i].x == coord[j].x && coord[i].y - 1 ==
				coord[j].y)))
				border--;
		}
	}
	if (border <= 10)
		return (1);
	return (0);
}

t_tetris		*order_tetris(t_tetris *tetris)
{
	t_point		*coord;
	int			i;
	int			x;
	int			y;

	coord = tetris->coord;
	i = -1;
	x = coord[0].x;
	y = coord[0].y;
	while (++i < 4)
	{
		coord[i].x = coord[i].x - x;
		coord[i].y = coord[i].y - y;
	}
	return (tetris);
}
