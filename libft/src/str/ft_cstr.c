/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:02:12 by agras             #+#    #+#             */
/*   Updated: 2022/01/29 16:08:58 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// find a char in a given string

char	*ft_cstr(char *str, char c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
