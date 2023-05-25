/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:24:34 by dojeanno          #+#    #+#             */
/*   Updated: 2023/05/25 12:18:21 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef struct s_vars
{
	int		eof;
	char	*line;
	int		i;
	int		j;
}				t_vars;

char	*get_next_line(int fd);
int		ft_slen(char *s);
void	*ft_calloc(size_t count, size_t size);
char	*ft_sjoin(char *s1, char *s2);
int		ft_strfind(char *s);
void	ft_bzero(void *s, size_t n);

#endif