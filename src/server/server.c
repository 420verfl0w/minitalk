/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:14:29 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/23 18:48:16 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minitalk.h"
#include "../../inc/libft.h"
#include "../../inc/ft_printf.h"

int	main(void)
{
	sigset_t			set;
	struct sigaction	sigact;

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
		pause();
	return (0);
}
