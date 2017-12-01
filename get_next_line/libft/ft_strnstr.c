/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ratroncy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:22:05 by ratroncy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 12:22:05 by ratroncy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(big);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (k == 0)
		return (NULL);
	while (big[i] && i < n)
	{
		while (big[i + j] == little[j] && (i + j) < n)
		{
			if (!little[j + 1])
				return ((char *)&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
