/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:59:10 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 20:04:54 by jcrisp           ###   ########.fr       */
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


char*	is_flag(char c, va_list ap)
{
	if (ft_isalpha(c)) //if this is just a letter we make it lower...(must replace soon)
		c = ft_tolower(c);
	else
		return (NULL);
	if (c == 's')
		return (va_arg(ap, char*));
	else if (c == 'c')
		return (va_arg(ap, char*));
	else if (c == 'd' || c == 'i')
		return (va_arg(ap, char*));
 	else if (c == 'p')
	{
		//ft_putstr("0x", count);
		//ft_itoab(va_arg(ap, long), 16, count); //I have to at 0x to this section
		return (ft_strjoin("0x",ft_itoab(va_arg(ap, long), 16)));
	}
	else if (c == 'o')
		return (ft_itoab(va_arg(ap, long), 8 ));
	else if (c == 'u')
		return (ft_itoab(va_arg(ap, long), 10));
	else if (c == 'x')
		return (ft_itoab(va_arg(ap, long), 16));
	return (NULL);
}
void	print_space(int spaces, int *count)
{
	int i;

	i = 0;
	while (i < spaces)
	{
		ft_putchar(' ', count);
		i++;
	}
}
void	space_printer(char* str, va_list ap, int *count)
{
	int ind;
	int val;
	char* nums; //nums will be the container for the numbers taken from 'str'
	char* to_print;

	nums = (char*)malloc(sizeof(char)*ft_strlen(str)); // this may be not effecient since I am checking for size multiple times.
	val = 0; //val will be the ultimate number of spaces that must be shifted.
	ind = 0; //makes the index of which the integers in the array end.
	
	while(ft_isdigit(str[ind])) //if there are no integers this will be 0;
		ind++;
	if (ind > 0)
	{
		ft_strncpy(nums, str, ind - 1); //should copy up until the point at which the integers end.
		val = ft_atoi(nums); //should take the string convert it to the proper length.
	}
	else
	{ 
		to_print = is_flag(str[0], ap); //should assume that there is just one character.
	}
		to_print = is_flag(str[ind], ap);
	if (val < 0)
	{
		//I have to print left justified. 
		val = val * -1;
		val = val - ft_strlen(to_print);
		ft_putstr(to_print, count);
		print_space(val, count);
	}
	else
	{
		val = val - ft_strlen(to_print);
		print_space(val, count);
		ft_putstr(to_print, count);
	}
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
			while(ft_isdigit(str[i]))
			{
				flag_buf[f] = str[i];
				i++;
				f++;
			}
			space_printer(flag_buf, valist, &count); //send the string containing ints or flags, % -> 1000x or x or 1000k
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	return (count);
}
