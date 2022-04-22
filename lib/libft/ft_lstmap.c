/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <ldournoi@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:16:27 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/08 23:16:29 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*l;
	t_list	*l1;

	l1 = ft_lstnew(f(lst->content));
	if (!l1)
	{
		ft_lstclear(&lst, del);
		return (0);
	}
	lst = lst->next;
	l = l1;
	while (lst)
	{
		l1 = ft_lstnew(f(lst->content));
		if (!l1)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&l, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&l, l1);
	}
	return (l);
}
