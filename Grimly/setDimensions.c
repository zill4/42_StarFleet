/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setDimensions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:13:42 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/28 22:45:05 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int*	setDimensions(char* dim)
{
	int * dimensions;

	dimensions[0] = ft_atoi(dim[0]);
	dimensions[1] = ft_atoi(dim[1]);
	free(dim[0]);
	free(dim[1]);
	free(dim);
	return (dimensions);
}
