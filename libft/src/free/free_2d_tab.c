/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_2d_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:23:26 by agras             #+#    #+#             */
/*   Updated: 2022/02/10 16:24:55 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// !! BE careful, void ** tab sent in params must have his last element set to
// NULL, else it will segfault 

void	free_2d_tab(void **tab)
{
	void	**tmp;

	if (!tab)
		return ;
	tmp = tab;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(tab);
}
