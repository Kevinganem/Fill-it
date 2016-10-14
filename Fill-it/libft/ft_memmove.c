/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 00:05:21 by kganem            #+#    #+#             */
/*   Updated: 2016/10/04 15:17:05 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*src2;
	char	*dst2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (src2 < dst2)
	{
		dst2 = dst2 + len - 1;
		src2 = src2 + len - 1;
		while (len-- > 0)
			*dst2-- = *src2--;
	}
	else
		while (len-- > 0)
			*dst2++ = *src2++;
	return (dst);
}
