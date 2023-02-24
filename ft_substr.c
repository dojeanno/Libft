/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:30:04 by dojeanno          #+#    #+#             */
/*   Updated: 2023/02/24 18:01:36 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = ft_calloc(sizeof(char), len + 1);
	if	(str == NULL)
		return (NULL);
	i = 0;
	while ((size_t)i < len && s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;	
	}
	return (str);
}

// to fix