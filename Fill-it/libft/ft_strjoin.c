/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 17:13:03 by kganem            #+#    #+#             */
/*   Updated: 2016/03/11 17:13:33 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*out;

	out = NULL;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		out = (char *)malloc(sizeof(char) * (len + 1));
		if (out)
		{
			ft_strcpy(out, s1);
			ft_strcat(out, s2);
		}
	}
	return (out);
}
