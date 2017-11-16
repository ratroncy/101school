/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:30:00 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/14 18:39:34 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*freshstr;

	if (!(freshstr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero(freshstr, size + 1);
	return (freshstr);
}
