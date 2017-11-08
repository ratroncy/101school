/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:20:59 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/08 14:22:02 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int square;

	square = 0;
	if (nb < 1)
		return (0);
	while (square <= 46340)
	{
		if (nb == square * square)
			return (square);
		if (square > 46340)
			return (0);
		square++;
	}
	return (0);
}
