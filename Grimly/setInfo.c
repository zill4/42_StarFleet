/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setInfo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:54:40 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/28 22:57:09 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int*	setInfo(char** dim, char* info, char* fileName)
{
	int i;
	int x;
	int p;
	int fd;

	fd = open(fileName, O_RDONLY);
	x = 0;
	i = 0;
	p = 0;
	while (buf != '\n')
	{
		read(fd, &buf, 1);
		if (!ft_isdigit(buf) && x < 2)
		{
			dimXY[x][i] = '\0';
			i = 0;
			x++;
		}
		if (x < 2)
			dimXY[x][i++] = buf;
		else
			info[p++] = buf;
	}
	return (setDimensions(dimXY));
}
