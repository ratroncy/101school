/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lelajour <lelajour@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 17:53:29 by lelajour     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 14:07:18 by lelajour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
