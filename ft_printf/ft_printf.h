/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:33:36 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 17:23:06 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

char	*ft_strjoin(char const *s1, char const *s2);

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *words);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_printf(char *str, ...);
int		ft_tolower(int c);
int		ft_isalpha(int c);
char*	ft_itoab(long value, int base);
//void	ft_atoib(long value, int base, int *count);
void	ft_putnbr(long d, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putchar(char c, int *count);

#endif
