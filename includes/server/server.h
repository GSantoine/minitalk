/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:59:44 by agras             #+#    #+#             */
/*   Updated: 2022/04/12 21:32:06 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <string.h>

# include "../../libft/includes/libft.h"

void	set_bit(char *byte, int shift);
void	clear_bit(char *byte, int shift);
void	print_byte_bin(unsigned char byte);

#endif