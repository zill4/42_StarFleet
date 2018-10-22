/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistro.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 18:29:39 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/21 15:24:13 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISTRO_H
# define BISTRO_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

struct 	 emnum
{
	char*	num;
	struct 	emnum *next;
};	

struct	n_list
{
	struct emnum *head;
	struct n_list *next;
};

int		basePos(char c, char* base);
int		ft_atoi(char* number);
int		ft_isdigit(char n);
int		ft_strsize(char* str);
int		isAscii(char c);
struct emnum	*init_emnum(struct emnum *lol);
int		isAscii(char c);
void	emnumPush(struct emnum *head, char* data);
void	print_list(struct emnum *head);
void	emnumPop(struct emnum *head);


#endif 
