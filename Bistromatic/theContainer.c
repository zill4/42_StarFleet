/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theContainer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 20:16:44 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/21 15:10:44 by jcrisp           ###   ########.fr       */
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
	int	streamSize;
	int	strPos;
	char* 	numeralBuf;
	int	iOp;
	//First argument is base second is size
	
	if (argc == 3)
	{
		/**************************************************/
		/* 			Base assignment & Stream Size		  */
		/**************************************************/
		base = argv[1]; // Limited to 4096.
		streamSize = ft_atoi(argv[2]); // should be limited to 4096
		printf("The culprit: %d\n",streamSize);
		read(0, &buf, streamSize);
		write(1,&buf, streamSize);
		buffy = (char *)malloc(streamSize);
		buffy = &buf;
		strPos = 0;
		//Allocate space for numeral buffer
		numeralBuf = (char *)malloc(streamSize);
		struct emnum listNumbers;
		char a = buffy[0];
		char b = buffy[1];
		iOp = 0;
		// Sample input: "201*42"
		while (strPos < streamSize)
		{
			if (ft_isdigit(buffy[strPos]))
			{
				// If the buffer is at a numeral it will add to the array.
				numeralBuf[iOp] = buffy[strPos];
				iOp++;
			}
			else if(ft_isOp(buffy[strPos]))
			{
				// If the buffer is at an operator, the array will be copied to list.
				// The the operator will be added to an array, once the string is read the 
				// numbers will be evaulated through the array.
				

		int i = 0;
		int x = 0;
		int b_size = 0;
		int z;

		while(base[b_size])
			b_size++;
		printf("The base size is: %d\n",b_size);
		printf("Buffy is %s\n",buffy);
		printf("The base  is: %s\n", base);
		printf("The base b is: %c\n",b);
		printf("The base a is: %c\n",a);
		x = basePos(b, base);
		i = basePos(a, base);

		z = i * x;
		printCalc(z,base,b_size);
		printf("\n");
// I want to add each element into an array and then into a list.

//		char bx = base[z%b_size];

//		printf("THE BX is: %c\n",bx);
	/*
		struct n_list *list;
		struct emnum *head;
		struct emnum *temp;
		head = (struct emnum*)malloc(sizeof(struct emnum));


		head->next = NULL;
		temp = head;
		emnumPush(head, '1');
		emnumPush(head, '2');
		emnumPush(head, '3');
		emnumPop(head);
		print_list(head);
	*/
	}	
	return (0);
}
