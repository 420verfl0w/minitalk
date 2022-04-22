/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:48:26 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/07 03:45:07 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
			 ft_print_arg(fmt, args, &i, &j);
		else
		{
			ft_putchar_fd(fmt[i], 1);
			j++;
			i++;
		}
	}
	return (j);
}
