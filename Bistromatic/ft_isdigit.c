/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 22:57:49 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/17 22:59:00 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistro.h"

int		ft_isdigit(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
