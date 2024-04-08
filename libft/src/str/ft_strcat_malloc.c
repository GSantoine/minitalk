/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_malloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:29:41 by agras             #+#    #+#             */
/*   Updated: 2022/02/09 17:01:54 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return the concatenated strings as a malloced string in the heap
// instead of modifying the stack based string passed in first param
// as do the real strlcat

char	*ft_strcat_malloc(const char *dst, const char *src)
{
	char	*concat;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	concat = malloc(sizeof(char) * (len + 1));
	if (!concat)
		return (NULL);
	while (*dst)
	{
		concat[i] = *dst;
		i++;
		dst++;
	}
	while (*src)
	{
		concat[i] = *src;
		i++;
		src++;
	}
	concat[i] = '\0';
	return (concat);
}
