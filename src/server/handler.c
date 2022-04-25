/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:43:56 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/25 21:39:21 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minitalk.h"
#include "../../inc/libft.h"
#include "../../inc/ft_printf.h"

extern int	g_pid[2];

void	handler(int sig, siginfo_t *siginfo, void *context)
{
	static unsigned char		c = 0;
	static int					j = 0;
	static int					arr[8];

	(void)context;
	if (g_pid[0] != siginfo->si_pid)
		ft_printf("\n[MESG] Message from %d: ", g_pid[0] = siginfo->si_pid);
	if (j < 8)
	{
		g_pid[1] = 0;
		if (sig == SIGUSR1)
			arr[j] = 1;
		else
			arr[j] = 0;
		if (++j == 8)
		{
			c = arr[0] * 128 + arr[1] * 64 + arr[2] * 32 + arr[3] * 16 + \
				arr[4] * 8 + arr[5] * 4 + arr[6] * 2 + arr[7];
			if (c == 0)
				g_pid[1] = 1;
			else
				ft_printf("%c", c);
			j = 0;
		}
	}
}
