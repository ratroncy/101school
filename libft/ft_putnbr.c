/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:19:58 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/09 13:54:27 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if ((n >= -2147483648) && (n <= 2147483647))
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if ((n >= 0) && (n <= 9))
			ft_putchar(n + '0');
		else
		{
			ft_putnbr(n / 10);
			ft_putchar((n % 10) + '0');
		}
	}
}
