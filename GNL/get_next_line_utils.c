/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:24:32 by dojeanno          #+#    #+#             */
/*   Updated: 2023/05/25 12:17:55 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_slen(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

int	ft_strfind(char *s)
{
	int		i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_sjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		y;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	y = 0;
	str = ft_calloc(sizeof(char), (ft_slen(s1) + ft_slen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	free (s1);
	while (s2 && s2[y])
		str[i++] = s2[y++];
	if (str[0] == 0)
	{
		free (str);
		return (NULL);
	}
	return (str);
}
