/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initEmnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 20:42:24 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/21 15:21:19 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistro.h"

struct	emnum	*init_emnum(struct emnum *lol)
{
	if (!(lol = (struct emnum*)malloc(sizeof(struct emnum))))
		return (NULL);
	lol->next = NULL;
	lol->num = NULL;
	return (lol);
}
