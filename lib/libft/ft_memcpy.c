/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:36:47 by ldournoi          #+#    #+#             */
/*   Updated: 2022/03/31 12:58:58 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char *) dest;
	tmp2 = (unsigned char *) src;
	if (!src && !dest)
		return (dest);
	while (n--)
	{
		*tmp = *tmp2;
		tmp++;
		tmp2++;
	}
	return (dest);
}
