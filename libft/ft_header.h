/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratroncy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:46:34 by ratroncy          #+#    #+#             */
/*   Updated: 2017/11/10 15:24:21 by ratroncy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_HEADER_H
#define _FT_HEADER_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void *ft_memset(void *s,int c, size_t n);
void *ft_bzero(void *s,size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strdup(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strstr(char *str, char *to_find);
char *ft_strnstr(char *str, char *to_find, unsigned int n);
int ft_strlen(const char *s);
int ft_atoi(char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void * ft_memalloc(size_t size);
void ft_memdel(void **ap);
char * ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_striter(char *s, void (*f)(char *));
void ft_putnbr(int nb);
void ft_putstr(const char *s);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, char *src, int nb);
int  ft_strcmp(char *s1, char *s2);
int  ft_strncmp(char *s1, char *s2, unsigned int n);
void ft_putchar(char c);
void ft_putendl(const char *s);
char *ft_strnew(size_t size);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif
