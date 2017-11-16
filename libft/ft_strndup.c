/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:18:26 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/14 18:39:14 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, unsigned int n)
{
	char			*dup;

	if (!(dup = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strncpy(dup, s, n);
	return (dup);
}
