/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:30:11 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/05 18:54:09 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	str = ft_calloc(ft_nbrlen(n) + 1, sizeof(char));
	str[0] = '0';
	if (n < 0)
	{
		neg = 1;
		if (n == -2147483648)
			n /= 10;
		n = -n;
	}
	while (n != 0)
	{
		if (n == 214748364 && neg == 1)
			str[i++] = '8';
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (neg == 1)
		ft_strcat(str, "-");
	return (ft_strrev(str));
}
