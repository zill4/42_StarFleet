/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:56:35 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/24 16:08:35 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GRIMLY_H
# define GRIMLY_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef	struct	s_cords
{
	int x;
	int y;
}t_cords;

int		ft_atoic(const char *str);
int		ft_isdigit(int c);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strclr(char *s);
int		specLine(int fd);

#endif
