/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:13:18 by dojeanno          #+#    #+#             */
/*   Updated: 2023/02/13 12:14:03 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destination;
	size_t	i;

	i = 0;
	destination = dst;
	while (i < n)
	{
		destination[i] = *(char *)src++;
		i++;
	}
	dst = destination;
	return (dst);
}
