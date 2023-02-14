/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:58:19 by dojeanno          #+#    #+#             */
/*   Updated: 2023/02/14 15:39:25 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*str;
	size_t	i;

	i = 0;
	destination = dst;
	str = (char *)src;
	if	(destination < str)
	{
		while (len-- > 0)
		{
			destination[len] = str[len];
			len--;
		}
	}
	else if	(destination > str)
	{
		while (i < len)
		{
			destination[i] = str[i];
			i++;
		}
	}
	dst = destination;
	return (dst);
}
// to fix