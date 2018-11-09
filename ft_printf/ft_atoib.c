/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoib.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:23:06 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/08 16:25:24 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_atoib(long value, int base, int *count)
{
	long div_c;
	long mod_c;

	div_c = value / base;
	mod_c = value % base;
	if (value == 0)
		return ;
	value = div_c;
	ft_atoib(value, base, count);
	if (mod_c >= 10 && base > 10)
		ft_putchar((mod_c % 10) + 'a', count);
	else
		ft_putnbr(mod_c, count);
}
