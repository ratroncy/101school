/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ratroncy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:22:05 by ratroncy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 12:22:05 by ratroncy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
