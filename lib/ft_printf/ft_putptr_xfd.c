/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_xfd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:05:25 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/08 11:18:39 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_xfd(unsigned long long n, int fd)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	if (n < 16)
	{
		i += ft_putchar_fd(hex[n % 16], fd);
	}
	else
	{
		i += ft_putptr_xfd(n / 16, fd);
		i += ft_putchar_fd(hex[n % 16], fd);
	}
	return (i);
}
