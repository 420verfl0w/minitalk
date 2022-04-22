/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:47:53 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/06 01:51:30 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int	mot;
	int	i;

	i = 0;
	mot = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (mot == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			mot = 1;
			str[i] -= 32;
		}
		else if (mot == 0 && (str[i] >= 48 && str[i] <= 57))
			mot = 1;
		else if (mot == 1 && (str[i] < 48 || str[i] > 57) && \
				(str[i] < 97 || str[i] > 122))
			mot = 0;
		i++;
	}
	return (str);
}
