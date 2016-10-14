/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 16:54:26 by kganem            #+#    #+#             */
/*   Updated: 2016/03/05 00:35:28 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	de;

	i = 0;
	while (dst[i] && i < size)
		i++;
	de = i;
	while (src[i - de] && i < size - 1)
	{
		dst[i] = src[i - de];
		i++;
	}
	if (de < size)
		dst[i] = '\0';
	return (de + ft_strlen(src));
}
