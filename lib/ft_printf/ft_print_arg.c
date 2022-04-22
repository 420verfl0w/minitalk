/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:06:48 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/07 21:18:46 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_arg(const char *format, va_list args, int *i, int *j)
{
	*i = *i + 1;
	if (format[*i] == '%')
		*j += ft_putchar_fd('%', 1);
	else if (format[*i] == 'c')
		*j += ft_putchar_fd(va_arg(args, int), 1);
	else if (format[*i] == 's')
		*j += ft_putstr_fd(va_arg(args, char *), 1);
	else if (format[*i] == 'i' || format[*i] == 'd')
		*j += ft_putnbr_fd(va_arg(args, int), 1);
	else if (format[*i] == 'u')
		*j += ft_putnbr_ufd(va_arg(args, unsigned int), 1);
	else if (format[*i] == 'x' || format[*i] == 'X')
		*j += ft_putnbr_xfd(va_arg(args, unsigned int), format[*i], 1);
	else if (format[*i] == 'p')
		*j += ft_putptr_fd(va_arg(args, void *), 1);
	*i = *i + 1;
}
