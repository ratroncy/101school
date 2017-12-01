/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   resolve.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lelajour <lelajour@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 14:01:29 by lelajour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/01 01:52:36 by lelajour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_ifposible(t_tetris *lst, char **tab)
{
	int i;
	int s;
	int stab;
	int itab;

	i = 0;
	itab = 0;
	if (lst)
	{
		while (i < 4)
		{
			s = 0;
			stab = 0;
			if (tab[i][stab] != '.')
				while (tab[i][stab] != '.')
					stab++;
			while (lst->tetris[i][s])
			{
				if (lst->tetris[i][s] == '#')
					tab[itab][stab++] = lst->pause;
				s++;
			}
			i++;
		}
	}
	i = 0;
	while (tab[i])
		ft_putendl(tab[i++]);
	ft_putchar('\n');
	return (tab);
}

char	**putintab(t_tetris *lst, char **tab)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (lst->pause != 'C')
	{
		if (!(tab = ft_ifposible(lst, tab)))
			return (ft_ifposible(lst, tab));
		lst = lst->next;
	}
	return (tab);
}

char	**ft_return(t_tetris *lst)
{
	char	**tab;
	int		i;
	int		s;

	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (13))))
		return (NULL);
	while (i < 13)
		if (!(tab[i++] = (char*)malloc(sizeof(char) * (13))))
			return (NULL);
	i = 0;
	while (tab[i])
		ft_memcpy(tab[i++], ".............", 13);
	putintab(lst, tab);
	i = 0;
	while (tab[i])
		ft_putendl(tab[i++]);
	return (tab);
}
