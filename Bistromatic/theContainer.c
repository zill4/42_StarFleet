/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theContainer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 20:16:44 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/17 23:06:38 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bistro.h"

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
	{
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
