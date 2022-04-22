/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:28:34 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/05 14:31:39 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	int		i;

	len = ft_strlen(s);
	i = len + 1;
	while (i--)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	if (c == 0)
		return ((char *)&s[len]);
	return (NULL);
}
