/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:26:57 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/08 16:28:27 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int i;

	i = 0;
	if (s == NULL)
		ft_putstr("(null)", count);
	else
		while (s[i])
			ft_putchar(s[i++], count);
}
