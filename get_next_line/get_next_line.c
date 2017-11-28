/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ratroncy <marvin@101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:05:56 by ratroncy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/28 16:21:56 by ratroncy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int		ret;
	char	*buf = "";

	(void)line;
	while (*buf != '\n')
		ret = read(fd, buf, BUFF_SIZE);
	ft_putnbr(ret);
	ft_putchar('\n');
	ft_putstr(buf);
	close(fd);
	return (0);
}

int		main(void)
{
	int		fd;
	char	**line;

	line = NULL;
	fd = open("42", O_RDONLY);
	ft_putnbr(fd);
	ft_putchar('\n');
	get_next_line(fd, line);
	return (0);
}
