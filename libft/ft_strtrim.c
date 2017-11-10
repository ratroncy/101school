/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:49:04 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/10 16:10:35 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	int		j;
	char	*freshstr;

	i = 0;
	j = 0;
	if (!(freshstr = (char *)ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[j] != '\0')
	{
		while (s[j] == ' ' || s[j] == ',' || s[j] == '\n' || s[j] == '\t')
			j++;
		while (ft_isalnum(s[j]) == 1)
		{
			freshstr[i] = s[j];
			i++;
			j++;
		}
		j++;
	}
	freshstr[i] = '\n';
	return (freshstr);
}
