/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_2d_tab_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:36:31 by agras             #+#    #+#             */
/*   Updated: 2022/01/29 14:54:05 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// !! BE careful, void ** tab sent in params must have his last element set to
// NULL, else it will segfault 

void	ft_print_2d_tab_char(char **tab)
{
	while (*tab)
	{
		ft_putstr_fd(*tab, 1);
		write(1, "\n", 1);
		tab++;
	}
}
