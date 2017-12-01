/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lelajour <lelajour@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 13:38:50 by lelajour     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/30 16:56:30 by lelajour    ###    #+. /#+    ###.fr     */
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

typedef struct			s_lfillit
{
	char				**tetris;
	char				pause;
	int					*x;
	int 				*y;

	struct s_lfillit	*next;
}						t_tetris;

static t_tetris			*new_l(char *str);
t_tetris				*fillit_store(char *str);
int						ft_ltab(char **tab);
void					ft_fail(void);
int						l_check(char *str);
static int				valid_tetri(char *str);
static	int				fillit_read(char str[BUFF_SIZE + 1]);
static int				check_tfile(char **tab);
int						fillit_check_file(char *file);
static int				check_tetri(char **tab);

#endif
