/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:14:53 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/09 16:15:11 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *nstr;

	nstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!nstr)
		return (NULL);
	ft_strncpy(nstr, s1, ft_strlen(s1));
	ft_strncat(nstr, s2, ft_strlen(s2));
	return (nstr);
}
