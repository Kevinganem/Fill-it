/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 16:48:40 by kganem            #+#    #+#             */
/*   Updated: 2016/03/11 18:04:32 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dst[dest_size])
		dest_size++;
	while (src[i])
	{
		dst[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dst[dest_size] = '\0';
	return (dst);
}
