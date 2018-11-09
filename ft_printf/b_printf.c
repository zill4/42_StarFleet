/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:59:10 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 11:08:38 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
 * is_flag('the flag', va_list obj cotains variable,  *count keeps track of string size)
 *
 * Required flags for assignment: sSpdDioOuUxXcC
 * 		s =  string
 * 		S =  string
 * 		p =  pointer
 * 		d =  integer signed
 * 		D =  integer signed
 * 		i =  integer signed
 * 		o =  octal
 * 		O =  octal
 * 		u =  unsigned integer
 * 		U =  unsigned integer 
 * 		x =  hexadecimal
 * 		X =  hexadecimal 
 * 		c =  character
 * 		C =  chracter
 */
void	space_printer(char* str, int *count)
{
	int ind;
	int val;
	
	val = 0; //val will be the ultimate number of spaces that must be shifted.
	ind = 0; //makrs the index of which the integers in the array end.
	while(isdigit(str[ind])) //if there are no integers this will be 0;
		ind++;
	if (ind > 0)
		val = ft_atoi(
		

}
void	is_flag(char c, va_list ap, int *count)
{
	if (ft_isalpha(c)) //if this is just a letter we make it lower...(must replace soon)
		c = ft_tolower(c);
	

	if (c == 's')
		ft_putstr(va_arg(ap, char*), count);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_atoib(va_arg(ap, long), 16, count);
	}
	else if (c == 'o')
		ft_atoib(va_arg(ap, long), 8, count);
	else if (c == 'u')
		ft_atoib(va_arg(ap, long), 10, count);
	else if (c == 'x')
		ft_atoib(va_arg(ap, long), 16, count);
}

int		ft_printf(char *str, ...)
{
	va_list		valist;
	int			i;
	int			count;
	char*		flag_buf;
	int			f; //inner flag_buf counter.
	
	//allocate the buffer to be equal in size of string in worst case.
	flag_buf = (char *)malloc(sizeof(char)*ft_strlen(str));
	f = 0;
	count = 0;
	va_start(valist, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			//is_flag(str[i], valist, &count);
			/*
			 * The issue stands:
			 *  	Must be able to take X sized integer with a flag at the end
			 *  	so while if % 
			 *  	then 
			 *  	while is digit construct a string and until a notdigit is reached.
			 *  	then send string to is_flag.
			 */
			while(isdigit(str[i]))
			{
				is_flag[f] = str[i];
				i++;
				f++;
			}
			is_flag(is_flag, valist, &count); //send the string containing ints or flags, % -> 1000x or x or 1000k
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	return (count);
}
