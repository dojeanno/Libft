/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:53:10 by dojeanno          #+#    #+#             */
/*   Updated: 2023/03/22 16:50:34 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	if (!s)
		return ;
	p = s;
	while (n-- > 0)
		*p++ = 0;
}
