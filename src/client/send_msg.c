/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 10:03:01 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/25 21:37:54 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minitalk.h"
#include "../../inc/libft.h"
#include "../../inc/ft_printf.h"

void	send_msg(pid_t pid, unsigned char *msg)
{
	int				i;
	int				j;
	unsigned char	c;

	i = 0;
	while (msg[i])
	{
		j = 0;
		c = msg[i++];
		while (j++ < 8)
		{
			if (c & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			c <<= 1;
			usleep(175);
		}
	}
	i = 0;
	while (i++ < 8)
	{
		kill(pid, SIGUSR2);
		usleep(175);
	}
}
