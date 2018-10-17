/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:46:06 by clingier          #+#    #+#             */
/*   Updated: 2018/10/16 11:40:17 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *fresh;
	t_list *fresh_cur;

	if (!lst)
		return (NULL);
	fresh_cur = f(lst);
	fresh = fresh_cur;
	while (lst->next)
	{
		lst = lst->next;
		if (!(fresh_cur->next = f(lst)))
		{
			return (NULL);
			free(fresh_cur->next);
		}
		fresh_cur = fresh_cur->next;
	}
	return (fresh);
}
