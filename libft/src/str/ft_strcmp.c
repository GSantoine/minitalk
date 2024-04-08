/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:00:53 by agras             #+#    #+#             */
/*   Updated: 2022/01/29 17:02:11 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	balance;

	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	balance = (unsigned char)*s1 - (unsigned char)*s2;
	return (balance);
}
