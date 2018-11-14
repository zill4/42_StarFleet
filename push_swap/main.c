/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:45:50 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/13 21:27:58 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/swap.h"


/*	void pushNum(int num, t_list *list)
 *	PARAMS
 *		num: Integer to be added to list.
 *		list: List Integer is added to.
 *	DESC
 *		Adds an Integer to the th`e end of a list.
 */

void	pushNum(int num, t_list **list)
{
	t_list 	*new;
	void *temp;

	temp = &num;
	new = ft_lstnew(temp, sizeof(int));
	ft_lstadd(list, new);
}


/*	void	printList(t_list *list)
 *	PARAM
 *		A t_list linked list element to be printed.		
 */

void*	printList(t_list *list)
{
	if (list->content)
		ft_putnbr(*(int*)list->content);
	else
		ft_putstr("(null)");
	return (list);
}

/*	void	printFullList(t_list *list)
 *	PARAMS
 *		given the an item in the linked list, prints its content.
 */
void	printFullList(t_list *list)
{
	while (list != NULL)
	{
		if (list->content)
			ft_putnbr(*(int*)list->content);
		else
			printf("NOPE\n");
		list = list->next;
	}
}

/*	int		checkInput(char* args)
 *	PARAMS
 *		given a string of one of the input arguments, checks if the input is a number.
 */

int		checkInput(char* args)
{
	int i;

	i = 0;
	while(ft_isdigit(args[i]))
		i++;
	// Check for the length of the screen
	return (ft_strlen(args) == i);
}

/* void	readArgs(int argc, char **args, t_list **list)
 *	PARAMS
 * 		given argument count (argc), an array of the arguments as Strings.
 * 		As well as a reference to the begining of a linkedlist.
 */

void	readArgs(int argc, char** args, t_list **list)
{
	int i;
	int number;

	number = 0;
	i = 1;
	while (i < argc)
	{
		printf("Argument read: %s\n", args[i]);
		if (checkInput(args[i]))
		{
			number = ft_atoi(args[i]);
			pushNum(number, list);
		}
		i++;
	}
	
}



int		main(int argc, char** argv)
{
	t_list *head;

	head = NULL;
	readArgs(argc, argv, &head);
	printFullList(head);
	return (0);
}
