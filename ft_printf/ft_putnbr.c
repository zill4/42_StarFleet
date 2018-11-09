/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:17:56 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/08 16:22:21 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long d, int *count)
{
	int sign;

	sign = 1;
	if (d < 0)
	{
		ft_putchar('-', count);
		sign = -1;
	}
	if (-9 <= d && d <= 9)
	{
		ft_putchar(d * sign + '0', count);
	}
	else
	{
		ft_putnbr((d / 10) * sign, count);
		ft_putnbr((d % 10) * sign, count);
	}
}
