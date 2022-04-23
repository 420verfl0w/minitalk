/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:55:38 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/23 16:08:12 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minitalk.h"
#include "../../inc/libft.h"
#include "../../inc/ft_printf.h"

int	main(int argc, char **argv)
{
	pid_t	pid;
	unsigned char	*msg;

	if (argc <= 2 || argc > 3 || ft_atoi(argv[1]) == 0)
	{
		ft_printf("Usage: %s [PID] [message]\n", argv[0]);
		return (0);
	}
	pid = (pid_t)ft_atoi(argv[1]);
	msg = (unsigned char *)argv[2];
	if (kill(pid, 0) == -1)
	{
		ft_printf("Error: No such process.\n");
		return (0);
	}
	send_msg(pid, msg);
	return (0);
}
