/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:50:58 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/20 11:15:02 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_is_negative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char			*ft_itoa(int n)
{
	int		mem;
	int		i;
	int		isneg;
	char	*str;

	mem = n;
	i = 2;
	isneg = 0;
	ft_is_negative(&n, &isneg);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (mem /= 10)
		i++;
	i += isneg;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	str[--i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	if (isneg)
		str[0] = '-';
	return (str);
}
