/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reaper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:30:40 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/28 23:45:42 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int		main(int argc, char **argv)
{
	char **fileNames;
	int iTemp;

	iTemp = 1;
	if (argc > 1)void	allocPoints(int** map, int* dim)
{
	int i;

	i = 0;
	map = (int**)malloc(sizeof(int*)*dim[0]);
	while(i < dim[0])
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
			map[y][x++] = buf
	}
	
	return (map);
}
	{
		while(iTemp < argc)
		{
			//Check for file names.
			fileNames[iTemp - 1] =  argv[iTemp];
			//Allocate space for info and dimensions.
			iTemp++;
		}
	}
	return (0);
}

/*
 *
 *int*	setDimensions(char** dim)
{
	int* dimensions;
	//Grimly may specify that the dimensions can be bigger than max int or long.
	dimensions = (int *)malloc(sizeof(int)*3);

	dimensions[0] = ft_atoi(dim[0]);
	dimensions[1] = ft_atoi(dim[1]);
	free(dim[0]);
	free(dim[1]);
	free(dim);
	return (dimensions);
}
 void allocPoints(int** map, int* dim)
{
	int i;

	i = 0;
	map = (int**)malloc(sizeof(int*)*dim[0]);
	while(i < dim[0])
	{
		mapchar*	openFile(int fd)
{
	char temp;
	char *buffer; 

	read(fd, &temp, 1);
	buffer = &temp;
	return (buffer);
}
[i] = (int*)malloc(sizeof(int)*dim[1]);
		i++;
	}
	

		read(fd, &buf, 1);
		if (buf == '\n')
		{
			map[y][x] = '\n';
			int*	setDimensions(char** dim)
{
	int* dimensions;
	//Grimly may specify that the dimensions can be bigger than max int or long.
	dimensions = (int *)malloc(sizeof(int)*3);

	dimensions[0] = ft_atoi(dim[0]);
	dimensions[1] = ft_atoi(dim[1]);
	free(dim[0]);
	free(dim[1]);
	free(dim);
	return (dimensions);
}y++;
			x = 0;
		}
		if (buf == info[3])
		{
			points[i].x = x;
			points[i++].y = y;
		}
		else if (buf == info[4])
			map[y][x++] = buf
	}
	
	return (map);
}


 *	int** makeMap
 *	Description: makeMap takes the dimensions array and 
 *	the filedescriptor to continue reading.
 *
 *	allocates space for a map of the maze. fills up the map with 
 *	the proper data.
 *
 
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
	while ( buf != '\0')
	{
 *	void		allocPoints(int** map, int* dim)
 *	Description: given the multi dimensional map, and the 
 *	the array of map dimensions allocate for the correct space.
*int		allocateInfo(char *fileName, char** dimXY, char* info)
{char*	openFile(int fd)
{
	char temp;
	char *buffer; 

	read(fd, &temp, 1);
	buffer = &temp;
	return (buffer);
}

	int		fd;
	char	buff;
	int x;
	int specSize;

	dimXY 
		fd = 0;

	specSize = specLine(fd); //Set string size for memalloc.
	dimXY[0] = (char*)memalloc(sizeof(char)*specSize);
	dimXY[1] = (char*)memalloc(sizeof(char)*specSize);
	info = (char*)memalloc(sizeof(char)*specSize);
	return (fd);
}


char*	openFile(int fd)
{
	char temp;
	char *buffer; 

	read(fd, &temp, 1);
	buffer = &temp;
	return (buffer);
}
int*	setDimensions(char** dim)
{
	int* dimensions;
	//Grimly may specify that the dimensions can be bigger than max int or long.
	dimensions = (int *)malloc(sizeof(int)*3);

	dimensions[0] = ft_atoi(dim[0]);
	dimensions[1] = ft_atoi(dim[1]);
	free(dim[0]);
	free(dim[1]);
	free(dim);
	return (dimensions);
}
*
\*

= (char**)malloc(sizeof(char*)*2); //allocate for X and Y.
	specSize = 0;
	if (fileName) 
		fd = open(fileName, O_RDONLY);
	else
		fd = 0;

	specSize = specLine(fd); //Set string size for memalloc.
	dimXY[0] = (char*)memalloc(sizeof(char)*specSize);
	dimXY[1] = (char*)memalloc(sizeof(char)*specSize);
	info = (char*)memalloc(sizeof(char)*specSize);
	return (fd);
}


char*	openFile(int fd)
{
	char temp;
	char *buffer; 

	read(fd, &temp, 1);
	buffer = &temp;
	return (buffer);
}
int*	setDimensions(char** dim)
{
	int* dimensions;
	//Grimly may specify that the dimensions can be bigger than max int or long.
	dimensions = (int *)malloc(sizeof(int)*3);

	dimensions[0] = ft_atoi(dim[0]);
	dimensions[1] = ft_atoi(dim[1]);
	free(dim[0]);
	free(dim[1]);
	free(dim);
	return (dimensions);
}
*
\*


