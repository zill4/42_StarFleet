/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reaper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:30:40 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/22 22:57:43 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unisdtd.h>
#include <stdlib.h>

char*	openFile(int fd)
{
	char temp;
	char *buffer; 

	read(fd, &temp, 1);
	buffer = &temp;
	return (buffer);
}
int*	setDimensions(char* dim)
{
	int* dimensions;
	int i;
	int 
	while (dim[i])
	{
		if (dim[i] == 'x')


	return (dimensions);
}

void	readFile(char *fileName)
{
	int		fd;
	char	temp;
	char	*buffer;
	char	**map; //Multidimensional array...coordinates.
	int x;
	int y;
	char* dimensions;
	char* info; //0 is obst, 1 is obst not, 2 is enter, 3 is exit
	//Check file.
	if (fileName) //Attempt opening file.
		fd = open(fileName, O_RDONLY);
	else
		fd = 0;
	if (fd != -1)
	{
		x = 0;
		y = 0;
		buffer = openFile(fd); 
		//Check line get dimensions malloc for the specs.
		while (*buffer != '\n')
		{
			// If the first characters are not numbers and are not an 'x'
			if (!ft_isdigit(*buffer) && *buffer != 'x')
			{
				dimensions[x] = *buffer;
				x++;
			}
			else
			{
				info[y] = *buffer;
				y++;
			}
			buffer++;
		}
			dimensions[x] = '\0';
			info[y] = '\0';
			x = 0;
			y = 1;
		while (*buffer != '\0')
		{
		
			if (*buffer == '\n')
			{
				y++;
				x = 0;
			}
			else if (*buffer
			map[y][x] = *buffer;
			
			buffer++;
		}
	}
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
			iTemp++;
			//Call function to try file.

		}
	}
	return (0);
}
