/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:08:57 by kganem            #+#    #+#             */
/*   Updated: 2016/10/03 19:27:42 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc(sizeof(*str) * (ft_strlen(s1) + 1));
	return (str ? ft_strcpy(str, s1) : NULL);
}
