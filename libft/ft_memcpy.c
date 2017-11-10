/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:15:56 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/09 16:35:48 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		*((char *)dest + n) = *((char *)src + n);
	return (dest);
}
