/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lelajour <lelajour@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 14:04:56 by lelajour     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 11:57:05 by lelajour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		nb_tetri;

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
	ft_putnbr(nb_tetri);
	return (0);
}
