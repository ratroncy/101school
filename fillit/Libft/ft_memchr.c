/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lelajour <lelajour@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 17:50:33 by lelajour     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/27 11:14:27 by lelajour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*temp_s;
	int			a;

	a = 0;
	temp_s = (const char*)s;
	while (n--)
	{
		if (*(const char*)s == (const char)c)
			return ((void*)s);
		s++;
	}
	return (NULL);
}
