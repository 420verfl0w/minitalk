/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:03:36 by ldournoi          #+#    #+#             */
/*   Updated: 2022/03/31 12:59:48 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char *) dest;
	tmp2 = (unsigned char *) src;
	while (n-- && *tmp2)
	{
		*tmp = *tmp2;
		if (*(tmp++) == (unsigned char)c)
			return (tmp);
		tmp2++;
	}
	return (NULL);
}
