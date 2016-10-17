/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 16:51:37 by kganem            #+#    #+#             */
/*   Updated: 2016/10/17 17:30:47 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_conf			*open_file(char *file, t_conf *conf)
{
	int			fd;

	fd = open(file, O_DIRECTORY);
	if (fd >= 0)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	if ((conf = read_file(&fd, conf)) == 0)
		return (NULL);
	return (conf);
}

t_conf			*read_file(int *fd, t_conf *conf)
{
	char		*buff;
	int			i;
	t_tetris	*tetris;
	int			last_read;
	int			now_read;

	i = 0;
	last_read = -1;
	buff = ft_strnew(21);
	while ((now_read = read(*fd, buff, 21)))
	{
		last_read = now_read;
		tetris = create_tetris(buff, i);
		if (tetris == NULL)
			return (NULL);
		conf->nbr_piece = i + 1;
		conf->list_tetris[i] = *tetris;
		i++;
	}
	if (last_read != 20 || now_read != 0)
		return (NULL);
	return (conf);
}
