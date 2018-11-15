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


//Swap the first 2 elemetns at the top of stack a. Do nothing if tehre is only one or no elements.
void sa(t_list *head)
{
	void *temp;
	void *temp_2;
	t_list *l_temp;


	temp = head->content; 
	temp_2 = head->next->content;
	head->content = temp_2;
	head->next->content = temp;
}
//Take the first elemetn at the top of b and put it at hte top of a. Do nothin if b is empty.
void pa(t_list *origin, t_list *dest)
{
	void *temp;
	void *temp_2;
	t_list *temple;
	//Must delete the original content and move the list forward.
	//Must push the next one to the other list. 
	temp = origin->content;
	//PUSHED TO THE NEXT LIST.
	pushNum(*(int*)temp, &dest);
	//I want to die but I can't I have to sit here listening to voice in my head telling me the things that I did wrong.
	//The chit chat in my head is stuck on a loop, and I am looking for an escape. I keep looking for someting, but I don't want to find myself.
	free(origin->content);
	origin->content_size = 0;
	temple = origin->next;
	free(origin);
	origin = temple;
}

//shift up all elements of stack a by 1.The first element becomes the last one.
void ra(t_list *head)
{
	//Rotate this list down one and take the last put it on top.
	t_list *temp;
	void *temple;
	size_t semple;

	temp = head;
	while (temp->next);
		temp = temp->next;
	temple = temp->content;
	semple = temp->content_size;
	free(temp->content);
	free(temp);
	temp = ft_lstnew(temple, sizeof(int));
	temp->next = head;
	head = temp;
}

//ra and rb at the same time.
void rr()
{

}
//Shift down all elements of stack a by 1. The last element becomes the first one.
void rra()
{

}
//Shift down all elements of stack b by 1. The last element becomes the first one.
void rrb()
{

}
//rra and rrb at the same time. 
void rrr()
{

}

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
/* void		checkFunk(char *flags, t_list *head_a, t_list *head_b)
 * 
 *
 */

void	checkFunk(char *flags, t_list *head_a, t_list *head_b)
{
	//Functions Sa, Sb, Ss, pa, pb, ra, rb, rr, rra, rrb, rrr
	static void (*pf[])(void) = {sa, pa, ra, rb, rr, rra, rrb, rrr };
	if (ft_strcmp("sa",flags) == 0)
	{
		//Swaping head_a.
		pf[0](head_a);
	}
	else if (ft_strcmp("sb",flags) == 0)
	{
		pf[0](head_b);
	}
	else if (ft_strcmp("ss",flags) == 0)
	{
		pf[0](head_a);
		pf[0](head_b);
	}
	else if (ft_strcmp("pa",flags) == 0)
	{
		//push from tp of b to top of a.
		pf[1](head_a, head_b);
	}
	else if (ft_strcmp("pb",flags) == 0)
	{
		pf[1](head_b, head_a);
	}
	else if (ft_strcmp("ra",flags) == 0)
	{
		pf[2](head_a);
	}
	else if (ft_strcmp("rb",flags) == 0)
	{
		pf[2](head_b);
	}
	else if (ft_strcmp("rr",flags) == 0)
	{
		pf[2](head_a);
		pf[2](head_b);
	}
	else if (ft_strcmp("rra",flags) == 0)
		pf[8];
	else if (ft_strcmp("rrb",flags) == 0)
		pf[9];
	else if (ft_strcmp("rrr",flags) == 0)
		pf[10];
}


int		main(int argc, char** argv)
{
	t_list *head; //head of a
	t_list *h_b; //head of b

	head = NULL;
	readArgs(argc, argv, &head);

	printFullList(head);
	return (0);
}
