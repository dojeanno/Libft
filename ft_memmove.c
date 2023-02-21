/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:58:19 by dojeanno          #+#    #+#             */
/*   Updated: 2023/02/20 19:16:00 by dojeanno         ###   ########.fr       */
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
	if (destination > str)
	{
		while (len-- > 0)
			destination[len] = str[len];
	}
	else
	{
		while (i++ < len)
			destination[i] = str[i];
	}
	dst = destination;
	return (dst);
}
// to fix