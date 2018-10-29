/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocMap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:46:02 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/28 22:47:23 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

void	allocMap(char** map, int* dim)
{
	int i;

	i = 0;
	map = (char**)malloc(sizeof(char*)*dim[0]);
	while (i < dim[0])
	{
		map[i] = (char*)malloc(sizeof(char)*dim[1]);
		i++;
	}
}
