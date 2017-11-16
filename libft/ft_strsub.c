/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:59:20 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/13 15:44:58 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_len;

	if (!s)
		return (NULL);
	if (!(str_len = (char *)ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_len[i] = s[start + i];
		i++;
	}
	str_len[i] = '\0';
	return (str_len);
}
