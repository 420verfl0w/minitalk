/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:37:47 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/03 23:40:01 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iscntrl(int c)
{
	return ((c >= 0 && c < 32) || c == 127);
}
