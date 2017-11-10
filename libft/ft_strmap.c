/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:34:18 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/10 15:44:11 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*freshstr;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(freshstr = (char *)ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		freshstr[i] = f((char)s[i]);
		i++;
	}
	freshstr[i] = '\0';
	return (freshstr);
}
