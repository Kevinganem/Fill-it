/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:19:09 by kganem            #+#    #+#             */
/*   Updated: 2016/10/04 15:26:32 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	int		k;

	if (!*s2)
		return (char *)(s1);
	i = 0;
	while (s1[i] && n > 0)
	{
		if (n < ft_strlen(s2))
			return (NULL);
		j = 0;
		k = i;
		while (s1[k] == s2[j] && s2[j] && s1[k])
		{
			j++;
			k++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		n--;
		i++;
	}
	return (NULL);
}
