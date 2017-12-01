/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ratroncy <ratroncy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/30 12:27:29 by ratroncy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/01 16:07:46 by ratroncy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int			ret;
	char		buf[BUFF_SIZE + 1];

	(void)line;
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = "\0";
	ft_putnbr(ret);
	ft_putchar('\n');
	ft_putstr((const char *)buf);
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	**line;

	line = NULL;
	(void)argc;
	fd = open(argv[1], O_RDONLY);
	ft_putnbr(fd);
	ft_putchar('\n');
	get_next_line(fd, line);
	return (0);
}
