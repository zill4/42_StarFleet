/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emnumPop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 22:04:37 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/17 22:09:02 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistro.h"

void	emnumPop(struct emnum *head)
{
	struct emnum *temp;
	struct emnum *temp_old;
	temp = head;

	while (temp->next != NULL)
	{
		temp_old = temp;
		temp = temp->next;
	}
	temp_old->next = NULL;
	free(temp);
}
