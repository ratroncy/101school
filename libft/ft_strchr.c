/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:07:42 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/20 11:12:08 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = -1;
	while (++i < (size_t)ft_strlen(s) + 1)
		if (*(s + i) == ((char)c))
			return ((char*)s + i);
	return (NULL);
}
