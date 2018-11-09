/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:33:36 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 11:06:13 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *words);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_printf(char *str, ...);
int		ft_tolower(int c);
int		ft_isalpha(int c);
void	ft_atoib(long value, int base, int *count);
void	ft_putnbr(long d, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putchar(char c, int *count);

#endif
