/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 16:39:09 by kganem            #+#    #+#             */
/*   Updated: 2016/03/11 16:42:14 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*alloc;

	alloc = malloc(size);
	if (alloc == NULL)
		return (NULL);
	else if (alloc)
		alloc = ft_memset(alloc, 0, size);
	return (alloc);
}
