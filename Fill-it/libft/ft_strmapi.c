/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <kganem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 17:07:59 by kganem            #+#    #+#             */
/*   Updated: 2016/10/03 19:44:12 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	if (s != NULL && f != NULL)
	{
		i = 0;
		if ((tmp = ft_strnew(ft_strlen(s))))
		{
			while (s[i])
			{
				tmp[i] = f(i, s[i]);
				i++;
			}
			return (tmp);
		}
	}
	return (NULL);
}
