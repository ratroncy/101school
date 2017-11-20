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

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	if (!lst || !f)
		return (NULL);
	if (!(newlst = (t_list *)malloc(sizeof(newlst))))
		return (NULL);
	newlst = f(lst);
	if (lst->next)
		newlst->next = ft_lstmap(lst->next, f);
	return (newlst);
}
