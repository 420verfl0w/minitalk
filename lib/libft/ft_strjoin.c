/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:42:59 by ldournoi          #+#    #+#             */
/*   Updated: 2022/03/29 19:00:01 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	char	*new;

	total = ft_strlen(s1) + ft_strlen(s2);
	new = malloc((total + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[0] = 0;
	ft_strcat(new, (char *)s1);
	ft_strcat(new, (char *)s2);
	return (new);
}
