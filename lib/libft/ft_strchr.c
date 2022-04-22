/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:22:14 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/05 14:36:47 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *) s;
	while (*tmp)
	{
		if (*tmp == (char) c)
			return (tmp);
		tmp++;
	}
	if (*tmp == '\0' && c == 0)
		return (tmp);
	return (NULL);
}
