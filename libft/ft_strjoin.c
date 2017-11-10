/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:39:53 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/10 14:06:37 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len;
	char	*freshstr;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	if (!(freshstr = (char *)ft_strnew(len)))
		return (NULL);
	ft_strcat(freshstr, s1);
	ft_strcat(freshstr, s2);
	return (freshstr);
}
