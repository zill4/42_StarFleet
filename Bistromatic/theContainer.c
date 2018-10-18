/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theContainer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 20:16:44 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/17 20:35:37 by jcrisp           ###   ########.fr       */
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
int	isAscii(char c)
{
	if (c >= '!' && c <= '~')
		return (1);
	else
		return (0);
}
int	ft_strsize(char* str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
int ft_isdigit(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}

int ft_atoi(char* number)
{
	int size;
	int sign;
	int i;
	int value;

	value = 0;
	i = 1;
	sign = 1;
	size = ft_strsize(number);
	if (number[0] == '-')
		sign = -1;

	while(ft_isdigit(number[--size]))
	{
		value += (number[size] - '0') * i;
		printf("The value is: %d\n", value);
		i *= 10;
	}
	return (value * sign);
}

int		basePos(char c, char*base)
{
	int i;

	i = 0;
	while(c != base[i])
		i++;
	return (i);
}

void	printCalc(int sum, char* base, int baseSize)
{
	if (sum > baseSize - 1)
	{
		printCalc( sum / baseSize, base, baseSize);
		printf("%c",base[sum % baseSize]);
	}
	else
		printf("%c",base[sum]);
}


int main(int argc, char** argv)
{
	char buf;
	char* buffy;
	char* base = (char*)malloc(95);
	int	 streamSize;
	//First argument is base second is size
	
	if (argc == 3)
i	{
		/**************************************************/
		/* 			Base assignment & Stream Size		  */
		/**************************************************/
		base = argv[1]; // Limited to 4096.
		streamSize = ft_atoi(argv[2]); // should be limited to 4096
		read(0, &buf, streamSize);
		buffy = (char *)malloc(streamSize);
		buffy = &buf;
		
		char a = buffy[0];
		char b = buffy[1];
		int i = 0;
		int x = 0;
		int b_size = 0;
		int z;

		while(base[b_size])
			b_size++;

		x = basePos(b, base);
		i = basePos(a, base);

		z = i * x;
		printCalc(z,base,b_size);
		printf("\n");

		char bx = base[z%b_size];

		printf("THE BX is: %c\n",bx);

		struct n_list *list;
		struct emnum *head;
		struct emnum *temp;
		head = (struct emnum*)malloc(sizeof(struct emnum));


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
