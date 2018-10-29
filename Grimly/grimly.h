/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:56:35 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/29 00:22:29 by jcrisp           ###   ########.fr       */
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
int**	makeMap(char* dim, int fd, char* info);
int* 	setDimensions(char* dim);
int*	setInfo(char** dim, char* info, char* fileName);
void	allocMap(char** map, int* dim);
void	allocPoints(int** map, int* dim);
int		allocateInfo(char *fileName, char** dimXY, char* info);

#endif
