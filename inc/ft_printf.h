/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:09:29 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/08 11:16:10 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_print_arg(const char *format, va_list args, int *i, int *j);
int		ft_putnbr_ufd(unsigned int n, int fd);
int		ft_putnbr_xfd(unsigned int n, char x, int fd);
int		ft_putptr_fd(void *ptr, int fd);
int		ft_putptr_xfd(unsigned long long ptr, int fd);


#endif
