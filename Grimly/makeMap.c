/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeMap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:02:01 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/29 00:23:03 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int**	makeMap(char* dim, int fd, char* info)
{
	char buf;
	int **map;
	int x;
	int y;
	t_cords* points;
	int i;

	i = 0;
	x = 0;
	y = 0;
	buf = '\0';
	allocMap(map, dim);
	allocPoints(points, dim);
	while (buf != '\0')
}
