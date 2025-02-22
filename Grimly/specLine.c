/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specLine.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 11:06:30 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/24 11:16:52 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int		specLine(int fd)
{
	char buf;
	int size;
	buf = '\0';
	size = 0;
	while(buf != '\n')
	{	
		read(fd,&buf,1);
		size++;
	}

	return (size);
}
