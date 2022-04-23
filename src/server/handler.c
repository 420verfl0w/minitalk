/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:43:56 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/23 19:42:02 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minitalk.h"
#include "../../inc/libft.h"
#include "../../inc/ft_printf.h"

void	handler(int sig, siginfo_t *siginfo, void *context)
{
	static unsigned char		c = 0;
	static pid_t				pid;
	static int					j = 0;
	static int					arr[8];

	(void)context;
	if (pid != siginfo->si_pid)
	{
		pid = siginfo->si_pid;
		ft_printf("\n[MESG] Message received: ");
	}
	if (j < 8)
	{
		if (sig == SIGUSR1)
			arr[j] = 1;
		else
			arr[j] = 0;
		j++;
		if (j == 8)
		{
			c = arr[0] * 128 + arr[1] * 64 + arr[2] * 32 + arr[3] * 16 + \
				arr[4] * 8 + arr[5] * 4 + arr[6] * 2 + arr[7];
			ft_printf("%c", c);
			j = 0;
		}
	}
}
