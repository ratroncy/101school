/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit_store.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lelajour <lelajour@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 09:35:37 by lelajour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/01 17:22:28 by lelajour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

static	char		**ft_swap_line(char **tab, char c)
{
	char 	*tmp;
	int		i;
	int		end;

	while	(ft_strchr(tab[0], c) == NULL)
	{
		i = -1;
		while (++i < 3)
		{
			tmp = ft_strdup(tab[i]);
			ft_strcpy(tab[i], tab[i + 1]);
			ft_strcpy(tab[i + 1], tmp);
			free(tmp);
		}
		i = 0;
	}
	while (tab[i])
		ft_putendl(tab[i++]);
	ft_putchar('\n');
	return (tab);
}

char				**ft_colchr(char **tab, int c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 3)
	{
		if (tab[i][j] == c)
			return (&tab[i]);
		i++;
	}
	return (NULL);
}

void				ft_char_swap(char a, char b)
{
	char	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

char				**ft_swap_col(char **tab, char c)
{
	int		i;
	int		j;
	int		l;

	i = -1;
	while (++i < 3)
		{
			j = -1;
			while (tab[i][++j])
			{
				l = ft_strlen(tab[i]);
				ft_char_swap(tab[i][j], tab[i][l]);
			}
		}
	return (tab);
}

static	char		**swap_empty(char **tab)
{
	if (ft_strchr(tab[0], '#') == NULL || ft_strchr(tab[1], '#') == NULL)
		ft_swap_line(tab, '#');
	while (ft_colchr(tab, '#') == NULL)
		ft_swap_col(tab, '#');
	return (tab);
}

static	t_tetris	*pos_tetris(t_tetris *lst)
{
	int i;
	int end_t;
	int i_lst;
	int i_tab;

	i_lst = 0;
	end_t = 4 * 4;
	i = 0;
	i_tab = 0;
	swap_empty(lst->tetris);
	while (i != end_t)
	{
		if (lst->tetris[i / 4][i % 4] == '#')
		{
			if (lst->tetris[i / 4][i % 4] == '#')
			{
				lst->x[i_lst] = (i_tab % 4);
				lst->y[i_lst++] = (i_tab / 4);
			}
			i_tab++;
		}
		i++;
	}
	return (lst);
}

static t_tetris		*new_l(char *str)
{
	int			i;
	t_tetris	*nw_l;
	char		**tab;

	i = 0;
	if (!(nw_l = (t_tetris*)malloc(sizeof(t_tetris))))
		return (NULL);
	tab = ft_strsplit(str, '\n');
	if (!(nw_l->tetris = (char**)malloc(sizeof(char*) * ft_ltab(tab))))
		return (NULL);
	if (!(nw_l->x = (int*)malloc(sizeof(int) * (ft_strlen(tab[i] + 1)))))
		return (NULL);
	if (!(nw_l->y = (int*)malloc(sizeof(int) * (ft_strlen(tab[i] + 1)))))
		return (NULL);
	while (i < ft_ltab(tab) - 1)
	{
		if (!(nw_l->tetris[i] = (char*)malloc(sizeof(char) *
		(ft_strlen(tab[i] + 1)))))
			return (NULL);
		nw_l->tetris[i] = ft_memcpy(nw_l->tetris[i], tab[i], ft_strlen(tab[i]));
		i++;
	}
	nw_l->next = NULL;
	nw_l = pos_tetris(nw_l);
	return (nw_l);
}

t_tetris			*fillit_store(char *str)
{
	int			fd;
	t_tetris	*l_list;
	t_tetris	*l_tmp;
	char		buff[21];
	char		a;

	a = 'A';
	if (!(l_list = (t_tetris*)malloc(sizeof(t_tetris))))
		return (NULL);
	fd = open(str, O_RDONLY);
	read(fd, buff, 21);
	l_list = new_l(buff);
	l_tmp = l_list;
	l_tmp->pause = a++;
	while (read(fd, buff, 21) >= 20)
	{
		l_tmp->next = new_l(buff);
		l_tmp->next->pause = a++;
		l_tmp = l_tmp->next;
	}
	l_tmp->next = NULL;
	return (l_list);
}
