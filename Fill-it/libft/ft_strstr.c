/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kganem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 14:09:59 by kganem            #+#    #+#             */
/*   Updated: 2016/03/07 17:18:34 by kganem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *s1, char *s2)
{
	int			i;
	int			j;
	int			count_char;

	i = 0;
	j = 0;
	count_char = 0;
	while (s2[count_char])
		count_char++;
	if (count_char == 0)
		return (s1);
	while (s1[i])
	{
		while (s2[j] == s1[i + j])
		{
			if (j == count_char - 1)
				return (s1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
