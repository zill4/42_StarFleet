/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emnumPush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 21:01:46 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/21 15:22:07 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistro.h"

void	emnumPush(struct emnum *head, char* data)
{
	struct emnum *temp;

	temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = init_emnum(temp->next);
	temp->next->num = data;
}

