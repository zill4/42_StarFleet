/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:57:56 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 16:59:30 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = (void *)malloc(sizeof(void) * size);
	if (!mem || !size)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
