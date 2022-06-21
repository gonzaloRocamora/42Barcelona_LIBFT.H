/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT
#include <stdlib.h>
#include <unistd.h>

void ft_bzero(void *s, size_t n);
char ft_isalnum(char c);
int	ft_str_is_alpha(char a);
int ft_isascii(int c);
int ft_isdigit( int arg );
int	ft_isprint(char *str);
void *ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void *memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t ft_strlen(char const *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char *strchr(const char *s, int c);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);
void *memset(void *str, int c, size_t len);
char *ft_strdup(const char *str);

#endif




