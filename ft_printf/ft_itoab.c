/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:03:27 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 17:26:27 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_reverse(char* str, int len)
{
	int start = 0;
	len = len - 1;
	char temp;

	while (start < len)
	{
		temp = str[start];
		str[start] = str[len];
		str[len] = temp;
		len--;
		start++;
	}
}	
char*	ft_itoab(long value, int base)
{
	long mod_c;
	int i;
	int sign;
	char* str;

	str = (char*)malloc(sizeof(char)*20);
	i = 0;
	sign = 0;
	if (value == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (value < 0 && base == 10)
	{
		sign = 1;
		value = value * -1;
	}
	while (value != 0)
	{
		mod_c = value % base;
		str[i++] = (mod_c > 9)? (mod_c - 10) + 'a' : mod_c + '0';
		value = value / base;
	}
	if (sign)
		str[i++] = '-';
	str[i] = '\0';	
	ft_reverse(str, i);
	return (str);
}
