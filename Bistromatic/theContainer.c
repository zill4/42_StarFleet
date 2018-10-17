/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theContainer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 20:16:44 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/16 22:15:50 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct emnum
{
	char num;
	struct emnum *next;
};

struct n_list
{
	struct emnum *head;
    struct n_list *next;
};
struct emnum	*init_emnum(struct emnum *lol)
{
	if (!(lol = (struct emnum*)malloc(sizeof(struct emnum))))
		return (NULL);
	lol->next = NULL;
	lol->num = '\0';
	return (lol);
}

void	push(struct emnum *head, char data)
{
	struct emnum *temp;

	temp = head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = init_emnum(temp->next);
	temp->next->num = data;
}

void	print_list(struct emnum *head)
{
	struct emnum *temp;
	
	temp = head;
	while(temp->next != NULL)
	{
		printf("%c\n",temp->num);
		temp = temp->next;
	}
	printf("%c\n",temp->num);
}

void	pop(struct emnum *head)
{
	struct emnum *temp;
	struct emnum *temp_old;
	temp = head;

	while (temp->next != NULL){
		temp_old = temp;
		temp = temp->next;
	}
	temp_old->next = NULL;
	free(temp);
}
	
int main(int argc, char** argv)
{
	
	if (argc > 1)
	{
		printf("Hello World\n");
		struct n_list *list;
		struct emnum *head;
		struct emnum *temp;
		head = (struct emnum*)malloc(sizeof(struct emnum));
		head->num = 'a';
		head->next = NULL;
		temp = head;
		push(head, '1');
		push(head, '2');
		push(head, '3');
		pop(head);		
		print_list(head);
	}	
	return (0);
}
