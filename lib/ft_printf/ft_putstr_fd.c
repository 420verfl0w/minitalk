/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:50:16 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/07 18:43:17 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	len;
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	len = ft_strlen(s);
	while (len--)
	{
		i += ft_putchar_fd(*s, fd);
		s++;
	}
	return (i);
}
