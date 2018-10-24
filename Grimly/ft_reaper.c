/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reaper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:30:40 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/24 16:11:35 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"
/*
 *	char*	openFile(int fd)
 *
 *	Description: This function takes in the file descriptor and opens
 *	returns a pointer to the given stream that had been opened.
 *	
 *	*WARN*
 *	may need to allocate correct buffer size, may require reading through twice.
 *
 */
char*	openFile(int fd)
{
	char temp;
	char *buffer; 

	read(fd, &temp, 1);
	buffer = &temp;
	return (buffer);
}
/*
 *	int*	setDimensions(char* dim)
 *	
 *	Description: This function takes in the (x,y) dimensions of 000x000
 *	from dim, converts and stores them as integers. Then frees dim's memory.
 *
 *	*WARNING*
 *	May have an issue with maps larger than MAX_INT
 */
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
/*
 *	int*	setInfo(char** dim, char* info, int fd)
 *	Description: set info reopens the file stream, 
 *	checks the info after memory has been allocated. 
 *	returns the dimensions of the map. 
 *
 */
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
		if (ft_isdigit(buf))
			dimXY[x][i++] = buf;			
		else if(!ft_isdigit(buf))
			info[p++] = buf; 
	}
	return (setDimensions(dimXY));
}
/*
 *	void		allocMap(char** map, int* dim)
 *	Description: given the multi dimensional map, and the 
 *	the array of map dimensions allocate for the correct space.
*/

void	allocMap(char** map, int* dim)
{
	int i;

	i = 0;
	map = (char**)malloc(sizeof(char*)*dim[0]);
	while(i < dim[0])
	{
		map[i] = (char*)malloc(sizeof(char)*dim[1]);
		i++;
	}
}

/*
 *	void	allocPoints(t_cords* points, int* dim)
 *
 */
void	allocPoints(t_cords* points, int* dim)
{

}
/*
 *	void	allocateInfo(char *fileName, char*dimXY, char* info)
 *	
 *	allocateInfo opens a file gets the size of the first line, and mallocs for
 *	the info first line, as well as for the dimensions of the map.
*/ 
int		allocateInfo(char *fileName, char** dimXY, char* info)
{
	int		fd;
	char	buff;
	int x;
	int specSize;

	dimXY = (char**)malloc(sizeof(char*)*2); //allocate for X and Y.
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
/*
 *	int** makeMap
 *	Description: makeMap takes the dimensions array and 
 *	the filedescriptor to continue reading.
 *
 *	allocates space for a map of the maze. fills up the map with 
 *	the proper data.
 *
 */
int**	makeMap(char* dim, int fd)
{
	char buf;
	int **map;
	int x;
	int y;
	t_cords* points;

	x = 0;
	y = 0;
	buf = '\0';
	allocMap(map, dim);
	allocPoints(points, dim);
	while ( buf != '\0')
	{
		read(fd, &buf, 1);
		if (buf == '\n')
		{
			map[y][x] = '\n';
			y++;
			x = 0;
		}
		else if(buf == '1')
		{
			points[
			map[y][x++] = buf
	}
	
	return (map);
}

int		main(int argc, char **argv)
{
	char **fileNames;
	int iTemp;

	iTemp = 1;
	if (argc > 1)
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
