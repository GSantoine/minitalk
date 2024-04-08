/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_management.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:29:28 by agras             #+#    #+#             */
/*   Updated: 2022/04/12 21:32:28 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/server/server.h"

void	set_bit(char *byte, int shift)
{
	*byte |= 1 << shift;
}

void	clear_bit(char *byte, int shift)
{
	*byte &= ~(1 << shift);
}

void	print_bit(unsigned char byte, int shift)
{
	if ((byte >> shift) & (1 == 1))
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

void	print_byte_bin(unsigned char byte)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		print_bit(byte, i);
		i--;
	}
	write(1, "\n", 1);
}
