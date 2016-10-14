/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 18:00:52 by kganem            #+#    #+#             */
/*   Updated: 2016/03/09 18:19:04 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t bytes;

	bytes = 0;
	while (bytes < n)
	{
		*((unsigned char *)dst + bytes) = *((unsigned char *)src + bytes);
		if (*((unsigned char *)src + bytes) == (unsigned char)c)
			return ((unsigned char *)dst + bytes + 1);
		bytes++;
	}
	return (NULL);
}
