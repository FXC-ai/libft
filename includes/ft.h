#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     ft_atoi(char *str);
void    *ft_memset(void *b, int c, size_t len);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
int     ft_strlen(char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);

#endif