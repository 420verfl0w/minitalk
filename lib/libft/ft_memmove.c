/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:34 by ldournoi          #+#    #+#             */
/*   Updated: 2022/03/31 13:15:23 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*org;
	unsigned char		*dstl;
	const unsigned char	*orgl;

	if (!dest && !src)
		return (dest);
	dst = (unsigned char *) dest;
	org = (const unsigned char *) src;
	dstl = (unsigned char *) dest + (n - 1);
	orgl = (const unsigned char *) src + (n - 1);
	if (dst < org)
		while (n--)
			*dst++ = *org++;
	else
	{
		while (n--)
			*dstl-- = *orgl--;
	}
	return (dest);
}
