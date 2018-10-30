/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocateInfo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:06:36 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/28 22:12:44 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int	allocateInfo(char *fileName, char** dimyXY, char* info)
{
	int fd;
	char buff;
	int x;
	int specSize;

	dimXY = (char**)malloc(sizeof(char*)*2);
	specSize = 0;
	if (fileName)
		fd = open(fileName, O_RDONLY);
	else
		fd = 0;

	specSize = specLine(fd);
	dimXY[0] = (char*)memalloc(sizeof(char)*specSize);
	dimXY[1] = (char*)memalloc(sizeof(char)*specSize);
	info = (char*)memalloc(sizeof(char)*specSize);
	return (fd);
}
