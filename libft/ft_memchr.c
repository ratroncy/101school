/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:15:57 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/14 15:39:40 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n != 0)
	{
		while (n-- != 0)
		{
			if (*(unsigned char *)(s++) == (unsigned char)c)
				return ((void *)(s - 1));
		}
	}
	return (NULL);
}
