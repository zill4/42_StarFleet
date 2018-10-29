/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocPoints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:51:52 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/28 21:55:28 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

void	allocPoints(int** map, int* dim)
{
	int i;

	i = 0;
	map = (int**)malloc(sizeof(int*)*dim[0]);
	while (i < dim[0])
	{
		map[i] = (int*)malloc(sizeof(int)*dim[1]);
		i++;
	}

	read(fd, &buf, 1);
	if (buf == '\n')
	{
		map[y][x] = '\n';
		y++;
		x = 0;
	}
	if (buf == info[3])
	{
		points[i].x = x;
		points[i++].y = y;
	}
	else if (buf == info[4])
		map[y][x++] = buf;

	return (map);
}

