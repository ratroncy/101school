/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:22:09 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/20 12:38:11 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content)
		new->content = ft_memalloc(content_size);
	else
		content = NULL;
	if (new->content)
		ft_memcpy(new->content, content, content_size);
	if (content)
		new->content_size = content_size;
	else
		content_size = 0;
	new->next = NULL;
	return (new);
}
