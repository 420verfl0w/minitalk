/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:55:38 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/25 21:50:08 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minitalk.h"
#include "../../inc/libft.h"
#include "../../inc/ft_printf.h"

void	prnt_ok(int sig)
{
	(void)sig;
	ft_printf("SUCCESS: server ack'ed reception.\n");
}

int	main(int argc, char **argv)
{
	pid_t			pid;
	unsigned char	*msg;

	if (argc <= 2 || argc > 3 || ft_atoi(argv[1]) == 0)
		return (ft_printf("Usage: %s [PID] [message]\n", argv[0]));
	pid = (pid_t)ft_atoi(argv[1]);
	msg = (unsigned char *)argv[2];
	sigaction(SIGUSR1, &(struct sigaction){.sa_handler = SIG_IGN}, NULL);
	if (kill(pid, 0) == -1)
		return (ft_printf("Error: No such process.\n"));
	send_msg(pid, msg);
	sigaction(SIGUSR1, &(struct sigaction){.sa_handler = &prnt_ok}, NULL);
	usleep(500000);
	return (0);
}
