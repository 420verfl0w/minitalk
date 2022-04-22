/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:37:30 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/05 15:22:59 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	little_len;

	i = 0;
	j = 0;
	little_len = (size_t)ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (big[i])
	{
		k = 0;
		if (big[i] == little[k])
		{
			j = i;
			while (big[j] == little[k] && big[j] != '\0' && \
					little[k++] != '\0')
				j++;
			if (k == little_len && j <= len)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
