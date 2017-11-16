/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:47:34 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/16 13:47:37 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{	
	size_t	i;
	size_t	j;
	char	*rev;

	i = ft_strlen(s);
	j = 0;
	if (!(rev = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	rev[i] = '\0';
	while (i-- > 0)
	{
		rev[i] = s[j];
		j++;
	}
	return (rev);
}