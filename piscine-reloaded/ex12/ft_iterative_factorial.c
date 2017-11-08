/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:12:03 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/08 14:40:13 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	while (nb > 1)
	{
		nb--;
		result = result * nb;
	}
	return (result);
}
