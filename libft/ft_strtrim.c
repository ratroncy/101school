/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ratroncy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:22:05 by ratroncy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 12:22:05 by ratroncy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	begin;
	size_t	end;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (!s[i])
		return (ft_strnew(0));
	begin = i;
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	end = i + 1;
	str = ft_strnew(end - begin);
	if (!str)
		return (NULL);
	ft_strncpy(str, &s[begin], end - begin);
	return (str);
}
