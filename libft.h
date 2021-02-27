/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:45:32 by irlalmeida        #+#    #+#             */
/*   Updated: 2021/02/27 09:39:20 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HEADER
#define		HEADER
#include	<ctype.h>
#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>
#include	<unistd.h>

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc (size_t number, size_t size);
int		ft_isalnum (int c);
int		ft_isalpha(int c);
int		ft_isascii(int a);
int		ft_isdigit(int a);
int		ft_isprint(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t len);
void	*ft_memchr(const void *b, int c, size_t len);
int		ft_memcmp(const void *b1, const void *b2, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *scr, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int a);
int		ft_toupper(int a);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
