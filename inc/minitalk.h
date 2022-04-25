/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:36:02 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/25 14:42:00 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define _POSIX_SOURCE
# define _DEFAULT_SOURCE
# include <signal.h>
# include <sys/wait.h>
# include <errno.h>
# include <error.h>
# include <string.h>
# include <time.h>
# include <unistd.h>

void			send_msg(pid_t pid, unsigned char *msg);
void			handler(int sig, siginfo_t *siginfo, void *context);
unsigned char	ft_extract_char(int arr[]);

#endif
