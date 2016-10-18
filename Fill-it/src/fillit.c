/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 16:51:01 by kganem            #+#    #+#             */
/*   Updated: 2016/10/14 17:05:55 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

/* malloc la struct conf, conf devient le fichier, s'il est different de NULL 
et que argc == 2, ca fait le bail, sinon ca return error */


void			fillit(int *argc, char **argv)
{
	t_conf		*conf;

	conf = init_conf();
	if (*argc == 2)
	{
		if ((conf = open_file(argv[1], conf)) != NULL)
		{
			algo(conf);
			ft_print_grid(conf->grid);
			return ;
		}
	}
	ft_putstr("error\n");
}
