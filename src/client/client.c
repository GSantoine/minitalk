/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:05:01 by agras             #+#    #+#             */
/*   Updated: 2024/04/08 18:00:28 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/client/client.h"

void	transfer_char(char chara, int pid)
{
	char	byte;
	int		i;

	byte = chara;
	i = 0;
	while (i < 8)
	{
		if (((byte << i) & 128) == 128)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
		i++;
	}
}

int	launch_client(int pid, char *msg)
{
	if (pid == -1)
		return (-1);
	while (*msg)
	{
		transfer_char(*msg, pid);
		msg++;
	}
	transfer_char(0, pid);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 3)
  {
    ft_putstr_fd("Usage: ./client <SERVER_ID> <MSG_TO_SEND>\n", 2);
    return (1);
  }
	if (launch_client(atoi(av[1]), av[2]) == -1)
		return (1);
	return (0);
}
