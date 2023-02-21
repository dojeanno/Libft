/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:42:29 by dojeanno          #+#    #+#             */
/*   Updated: 2023/02/20 19:15:45 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, (count * size));
	return ((void *)ptr);
}
