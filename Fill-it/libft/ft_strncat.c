/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 16:49:23 by kganem            #+#    #+#             */
/*   Updated: 2016/03/05 00:32:12 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dst, char *src, int nb)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dst[dest_size])
		dest_size++;
	while (i < nb && src[i])
	{
		dst[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dst[dest_size] = '\0';
	return (dst);
}
