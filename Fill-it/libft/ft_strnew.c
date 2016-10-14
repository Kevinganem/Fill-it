/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 16:46:21 by kganem            #+#    #+#             */
/*   Updated: 2016/10/03 19:28:48 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = malloc(sizeof(*tmp) * ((size) + 1));
	if (tmp)
	{
		while (i <= size)
			tmp[i++] = '\0';
	}
	return (tmp);
}
