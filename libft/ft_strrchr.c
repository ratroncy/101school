/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:31:30 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/09 16:13:17 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = ft_strlen(s) - 1;
	str = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
