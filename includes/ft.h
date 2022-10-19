#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>

int     ft_atoi(char *str);
void    *ft_memset(void *b, int c, size_t len);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
int     ft_strlen(char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);


#endif