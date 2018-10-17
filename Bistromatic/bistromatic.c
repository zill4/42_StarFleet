/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistromatic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 11:35:35 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/15 20:16:22 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bistro.h"
#include <stdio.h>



int	ft_strsize(char* str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int ft_isdigit(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}

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

int	ft_calc(char* num, int value)
{
	int i;
	char* num_cpy;
	int val;
	int temp;

	temp = 0;

	val = 0;
	i = 0;
	num_cpy = (char *)malloc(sizeof(char)*ft_strsize(num));
//	num_cpy = num;
	if(!ft_isdigit(*num))
		num++; 
	while(ft_isdigit(*num))
	{
		num_cpy[i] = *num;
		num++;
		i++;
	}
	num_cpy[i] = '\0';
	value = ft_atoi(num_cpy);
	printf("num_cpy is %d\n",value);
	printf("Num pointer is %c\n",*num);
	if (*num == '*')
		return(ft_calc(num, value) * value); 
	else if (*num == '+')
		value += ft_calc(num, value);
	else if (*num == '-')
		value = (ft_calc(num, value) - value);
	else if (*num == '%')
		value = (ft_calc(num, value) % value);
	else if (*num == '/')
		value = (ft_calc(num, value) / value);
	return (value);
}


int main(int argc, char** argv)
{
	char buf;
	char *base;
	char *size_stream;
	int strm_size;
	int value;
	n_num* head = NULL; 
	head = (n_num*)malloc(sizeof(n_num));

	value = 0;
	if (argc > 1)
	{
		base = argv[1];
		printf("\nThe base: %s\n", base);
		size_stream = argv[2];
		printf("The size of stream: %s\n", size_stream);
		//Cannot Attoi because of infinitely large numbers
		strm_size = ft_atoi(size_stream);
		printf("The converted size: %d\n",strm_size);
	}
	read(0, &buf, strm_size);
	write(1, &buf, strm_size);
	value = ft_calc(&buf, value);
   	printf("Value: %d\n",value);	
	return (0);
}
