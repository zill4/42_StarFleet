/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistro.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 18:29:39 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/15 19:29:13 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISTRO_H
# define BISTRO_H
# include <unistd.h>
# include <stdlib.h>

typedef struct 	l_num
{
	char	data;
	struct 		n_num *next;
}				n_num; 

#endif 
