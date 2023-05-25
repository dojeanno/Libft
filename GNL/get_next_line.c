/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:23:49 by dojeanno          #+#    #+#             */
/*   Updated: 2023/05/25 12:18:14 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clean_buffer(char *stash)
{
	t_vars	vars;
	char	*new_stash;

	if (!stash)
		return (NULL);
	vars.i = 0;
	while (stash[vars.i] && stash[vars.i] != '\n')
		vars.i++;
	if (stash[vars.i] == '\n')
		vars.i++;
	vars.j = ft_slen(stash) - vars.i;
	new_stash = ft_calloc(sizeof(char), vars.j + 1);
	if (!new_stash)
		return (NULL);
	vars.j = 0;
	while (stash[vars.i] != '\0')
	{
		new_stash[vars.j] = stash[vars.i];
		vars.i++;
		vars.j++;
	}
	free (stash);
	return (new_stash);
}

char	*create_line(char *stash)
{
	t_vars	vars;

	if (!stash)
		return (NULL);
	vars.i = 0;
	while (stash[vars.i] && stash[vars.i] != '\n')
		vars.i++;
	if (stash[vars.i] == '\n')
		vars.i++;
	vars.line = ft_calloc(sizeof(char), vars.i + 1);
	if (!vars.line)
		return (NULL);
	vars.j = 0;
	while (vars.j < vars.i)
	{
		vars.line[vars.j] = stash[vars.j];
		vars.j++;
	}
	return (vars.line);
}

char	*fill_buffer(int fd, char *stash)
{
	t_vars	vars;
	char	*buff;

	buff = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	vars.eof = 1;
	while (vars.eof > 0 && ft_strfind(stash))
	{
		ft_bzero(buff, BUFFER_SIZE + 1);
		vars.eof = read(fd, buff, BUFFER_SIZE);
		if (vars.eof < 0)
		{
			free (stash);
			free (buff);
			return (NULL);
		}
		stash = ft_sjoin(stash, buff);
	}
	free (buff);
	return (stash);
}

char	*get_next_line(int fd)
{
	t_vars			vars;
	static char		*stash;

	if (BUFFER_SIZE < 1 || fd > OPEN_MAX || fd < 0)
		return (NULL);
	if (!stash)
	{
		stash = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
		if (!stash)
			return (NULL);
	}
	stash = fill_buffer(fd, stash);
	vars.line = create_line(stash);
	stash = clean_buffer(stash);
	if (stash && stash[0] == 0)
	{
		free (stash);
		stash = NULL;
	}
	if (vars.line && vars.line[0] == 0)
	{	
		free (vars.line);
		return (NULL);
	}
	return (vars.line);
}
