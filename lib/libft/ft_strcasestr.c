/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:15:45 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/04 02:04:26 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcasestr(const char *big, const char *l)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	little_len;

	i = 0;
	j = 0;
	little_len = (size_t)ft_strlen(l);
	if (little_len == 0)
		return ((char *)big);
	while (big[i])
	{
		k = 0;
		if (ft_tolower(big[i]) == ft_tolower(l[k]))
		{
			j = i;
			while ((ft_tolower(big[j]) == ft_tolower(l[k])) && big[j] != '\0'\
					&& l[k++] != '\0')
				j++;
			if (k == little_len)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
