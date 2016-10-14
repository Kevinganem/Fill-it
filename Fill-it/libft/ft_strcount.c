/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 17:02:07 by kganem            #+#    #+#             */
/*   Updated: 2016/10/13 17:04:15 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strcount(const char *str, char c)
{
	size_t	counter;

	counter = 0;
	while (*str)
	{
		if (*str == c)
			counter++;
		str++;
	}
	return (counter);
}
