/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 22:52:02 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/21 15:06:31 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistro.h"

int ft_atoi(char* number)
{
	int size;
	int sign;
	int i;
	int value;

	value = 0;
	i = 1;
	sign = 1;
	size = ft_strsize(number);
	if (number[0] == '-')
		sign = -1;

	while(ft_isdigit(number[--size]))
	{
		value += (number[size] - '0') * i;
		printf("The value is: %d\n", value);
		i *= 10;
	}
	return (value * sign);
}
