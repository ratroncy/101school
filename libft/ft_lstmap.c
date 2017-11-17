/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:27:38 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/17 12:27:39 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*tmp;

	newlst = NULL;
	tmp = newlst;
	if (!(newlst = ft_memalloc(lst->content_size)))
		return (NULL);
	while (lst)
	{
		newlst = f(lst);
		newlst = newlst->next;
		lst = lst->next;
	}
	lst->next = NULL;
	return (tmp);
}