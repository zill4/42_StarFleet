/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emnumPrint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 23:03:49 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/21 15:23:45 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistro.h"

void		print_list(struct emnum *head)
{
	struct emnum *temp;

	temp = head;
	while (temp->next != NULL)
	{
		printf("%s\n", temp->num);
		temp = temp->next;
	}
	printf("%s\n",temp->num);
}
