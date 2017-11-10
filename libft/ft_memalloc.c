/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:09:00 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/10 13:34:54 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memalloc(size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	if (size > 65535)
		return (NULL);
	if (!(memory = (char *)malloc(sizeof(size) * i + 1)))
		return (NULL);
	while (i <= size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}