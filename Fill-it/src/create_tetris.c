/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tetris.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 16:56:37 by kganem            #+#    #+#             */
/*   Updated: 2016/10/14 17:17:36 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_tetris		*init_tetris(char name)
{
	t_tetris	*tetris;
	t_point		*coord;
	int			i;

	i = -1;
	tetris = (t_tetris*)malloc(sizeof(t_tetris));
	tetris->name = name + 65;
	while (++i < 4)
	{
		coord = (t_point*)malloc(sizeof(t_point));
		coord->x = -1;
		coord->y = -1;
		tetris->coord[i] = *coord;
	}
	return (tetris);
}

t_tetris		*create_tetris(char *str, char name)
{
	t_tetris	*tetris;
	int			i;
	int			nbr;

	i = -1;
	nbr = -1;
	tetris = init_tetris(name);
	while (++i < 20)
	{
		if (str[i] == '\n' && (i + 1) % 5 != 0)
			return (NULL);
		if (str[i] == '.' || str[i] == '\n')
			;
		else if (str[i] == '#' && ++nbr < 4)
			create_tetris_coord(tetris, nbr, i);
		else
			return (NULL);
	}
	if (name != 0 && str[i] != '\n')
		return (NULL);
	return (check_tetris(tetris));
}

void			create_tetris_coord(t_tetris *tetris, int nbr, int i)
{
	t_point		point;

	point = *ft_new_point(i % 5, i / 5);
	tetris->coord[nbr] = point;
}
