/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 17:05:06 by kganem            #+#    #+#             */
/*   Updated: 2016/10/03 19:30:31 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tmp;

	if (s != NULL && f != NULL)
	{
		i = 0;
		if ((tmp = ft_strnew(ft_strlen(s))))
		{
			while (s[i])
			{
				tmp[i] = f(s[i]);
				i++;
			}
			return (tmp);
		}
	}
	return (NULL);
}
