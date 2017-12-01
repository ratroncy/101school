/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ratroncy <ratroncy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:11:52 by ratroncy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/01 14:07:00 by ratroncy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H

#define BUFF_SIZE 15

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

int     get_next_line(const int fd, char **line);

#endif
