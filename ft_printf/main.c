/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:30:01 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 10:39:55 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"
int main()
{
	int test = 123;
	int total = 0, total2 = 0;

	total =	printf("Hello world, %d %s %c %x %p %o %i\n", INT_MAX, "Hi", '4', test, &test, test, INT_MIN);
	//total2 = b_printf("Hello world, %d %s %c %x %p %o %i\n", INT_MAX, "Hi", '4', test, &test, test, INT_MIN);

	total =	printf("Hello world, %D %S %C %X %p %O %i\n", INT_MAX, "Hi", '4', test, &test, test, INT_MIN);
	//total2 = b_printf("Hello world, %D %S %C %X %p %O %i\n", INT_MAX, "Hi", '4', test, &test, test, INT_MIN);
	printf("This is a test %10sthe fact", "Matcha ");
	printf("Total: %d\n", total);
	printf("Total 2: %d\n", total2);
	return (0);
}
