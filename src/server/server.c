/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:14:29 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/25 21:33:24 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minitalk.h"
#include "../../inc/libft.h"
#include "../../inc/ft_printf.h"

int	g_pid[2];

int	main(void)
{
	sigset_t			set;
	struct sigaction	sigact;

	g_pid[0] = 0;
	g_pid[1] = 0;
	ft_printf("[INFO] Server PID: %d\n", getpid());
	sigemptyset(&set);
	sigaddset(&set, SIGUSR1);
	sigaddset(&set, SIGUSR2);
	sigact.sa_flags = SA_SIGINFO;
	sigact.sa_mask = set;
	sigact.sa_sigaction = &handler;
	sigaction(SIGUSR1, &sigact, NULL);
	sigaction(SIGUSR2, &sigact, NULL);
	while (1)
	{
		if (g_pid[1])
		{
			usleep(500);
			kill(g_pid[0], SIGUSR1);
		}
		pause();
	}
	return (0);
}
