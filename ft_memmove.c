/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:58:19 by dojeanno          #+#    #+#             */
/*   Updated: 2023/02/13 12:14:14 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	size_t	i;

	i = 0;
	destination = dst;
	while (i < len)
	{
		destination[i] = *(char *)src++;
		i++;
	}
	dst = destination;
	return (dst);
}
