/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lelajour <lelajour@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 13:38:50 by lelajour     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/27 11:18:58 by lelajour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# define BUFF_SIZE 700
# define TRUE 0
# define FALSE 1

typedef struct s_point
{
	char 			a;
	int 			x;
	int 			y;
	struct s_point	*next;

}				t_point;

void		ft_fail(void);
int			l_check(char *str);
static int	valid_tetri(char *str);
static	int	fillit_read(char str[BUFF_SIZE + 1]);
static int	check_tfile(char **tab);
int			fillit_check_file(char *file);
static int	check_tetri(char **tab);

#endif
