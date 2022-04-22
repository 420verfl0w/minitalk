/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:13:31 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/01 19:17:01 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	i;
	size_t	sl;

	i = 0;
	dl = 0;
	while (dst[dl] != 0 && dl < size)
		dl++;
	sl = ft_strlen(src);
	if (size == 0)
		return (dl + sl);
	if (dl > size - 1)
		return (sl + dl);
	while (src[i] && dl + i < size - 1)
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = 0;
	return (dl + sl);
}
