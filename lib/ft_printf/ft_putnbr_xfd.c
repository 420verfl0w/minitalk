/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xfd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:39:54 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/08 11:01:19 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xfd(unsigned int n, char x, int fd)
{
	int				i;
	char			*hex;

	if (x == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	if (n >= 16)
	{
		i += ft_putnbr_xfd(n / 16, x, fd);
		i += ft_putchar_fd(hex[n % 16], fd);
	}
	else
		i += ft_putchar_fd(hex[n % 16], fd);
	return (i);
}
