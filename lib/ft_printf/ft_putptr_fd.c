/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:40:42 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/08 11:16:14 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return (ft_putstr_fd("(nil)", fd));
	i += ft_putstr_fd("0x", fd);
	i += ft_putptr_xfd((unsigned long long)ptr, fd);
	return (i);
}
