/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:11:29 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 19:13:58 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int test;
	test = INT_MAX;

	printf("Hello Wordld, %d %10d\n",test,test);
	ft_printf("Hello Wordld, %d %10d\n",test,test);
	return (0);
}
