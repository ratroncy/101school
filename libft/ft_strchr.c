/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:07:42 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/09 16:11:10 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (s[i] == '\0')
		return (&str[i]);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
