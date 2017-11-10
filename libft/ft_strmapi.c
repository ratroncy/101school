/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:11:55 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/10 15:45:03 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
		freshstr[i] = f(i, (char)s[i]);
		i++;
	}
	freshstr[i] = '\0';
	return (freshstr);
}
