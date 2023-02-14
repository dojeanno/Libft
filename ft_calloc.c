/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:42:29 by dojeanno          #+#    #+#             */
/*   Updated: 2023/02/14 16:01:14 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(size * count);
	while (i < (int)(size * count))
		ptr[i] = '\0';
	return ((void *)ptr);
}
// to fix