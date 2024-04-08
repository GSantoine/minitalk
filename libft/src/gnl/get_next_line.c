/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:08:54 by agras             #+#    #+#             */
/*   Updated: 2022/01/29 15:27:50 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <string.h>

char	*cut_buff(char **left, int i, int mod)
{
	char	*line;
	char	*tmp;
	int		cut_pos;

	cut_pos = i;
	if (mod == GNL_NORETURN)
		cut_pos -= 1;
	line = ft_strndup(*left, cut_pos);
	tmp = (*left);
	(*left) += i;
	*left = ft_strndup(*left, BUFFER_SIZE);
	free(tmp);
	return (line);
}

char	*exit_func(char **left, char *buf)
{
	char	*tmp;

	tmp = NULL;
	if (*left)
	{
		if ((*left)[0])
			tmp = ft_strndup(*left, ft_strlen(*left));
	}
	free(*left);
	free(buf);
	*left = NULL;
	return (tmp);
}

char	*get_next_line(int fd, int mod)
{
	static char		*left = NULL;
	char			*buf;
	int				i;
	int				bytes_read;

	i = 0;
	if (left)
	{
		while (left[i])
		{
			if (left[i] == '\n')
				return (cut_buff(&left, i + 1, mod));
			i++;
		}
	}
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes_read = read(fd, buf, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (exit_func(&left, buf));
	buf[bytes_read] = '\0';
	left = ft_strjoin_m(left, buf);
	return (get_next_line(fd, mod));
}
