/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:54:06 by agras             #+#    #+#             */
/*   Updated: 2022/05/02 16:08:06 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/server/server.h"

char	g_msg[10000];

void	print_msg(void)
{
	int	i;

	i = 0;
	while (g_msg[i])
	{
		write(1, &g_msg[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	reset_msg(void)
{
	int	i;

	i = 0;
	while (i < 10000)
	{
		g_msg[i] = '\0';
		i++;
	}
}

void	handle_signal(int sig)
{
	static int	bit_count = 7;
	static int	i = 0;

	if (sig == SIGUSR2)
		set_bit(&g_msg[i], bit_count);
	if (bit_count == 0)
	{
		bit_count = 8;
		if (g_msg[i] == 0)
		{
			print_msg();
			reset_msg();
			bit_count = 7;
			i = 0;
			return ;
		}
		i++;
		g_msg[i] = 0;
	}
	bit_count--;
}

int	wait_for_msg(void)
{
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
}

int	main(void)
{
	pid_t	pid;

	reset_msg();
	pid = getpid();
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	wait_for_msg();
}
