/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lelajour <lelajour@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 14:04:56 by lelajour     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/01 14:06:54 by lelajour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	print_lst(t_tetris *lst)
{
	int i;

	i = 0;
	if (lst)
	{
		while (lst != NULL)
		{
			ft_putchar(lst->pause);
			lst = lst->next;
		}
	}
}

int		main(int ac, char **av)
{
	int			nb_tetri;
	t_tetris	*l_tetris;

	nb_tetri = 0;
	if (ac != 2)
	{
		ft_putendl("usage: fillit tetriminos(.txt)");
		exit(TRUE);
	}
	else if (!(nb_tetri = fillit_check_file(av[1])))
		ft_fail();
	if (l_check(av[1]) != TRUE)
		ft_fail();
	if (!(l_tetris = fillit_store(av[1])))
		ft_fail();
	// print_lst(l_tetris);
	ft_return(l_tetris);
	ft_putendl("jusque la tt va b1");
	return (0);
}
