/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ratroncy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:22:05 by ratroncy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 12:22:05 by ratroncy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
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
