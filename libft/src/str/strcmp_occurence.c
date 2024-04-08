/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_occurence.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:26:07 by agras             #+#    #+#             */
/*   Updated: 2022/01/29 18:18:27 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// works like ft_strcmp but without taking in account the order
// of the characters
// return 0 if the 2 strings have the exact same characters but not
// necessarily in the same order
// else return the number of characters they have don't have in common

int	strcmp_occurence(const char *s1, const char *s2)
{
	int	count;
	int	s1_len;

	count = 0;
	s1_len = ft_strlen(s1);
	while (*s2)
	{
		if (ft_strchr(s1, *s2) != 0)
			count++;
		s2++;
	}
	if (s1_len == count)
		return (0);
	return (count);
}
