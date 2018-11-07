/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:31:13 by jcrisp            #+#    #+#             */
/*   Updated: 2018/11/06 22:03:51 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H
# include <unistd.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# define mapWidth 24
# define mapHeight 24

typedef struct s_player
{
	double x; //x coordinate on the map of player
	double y; //y coordinate on the map of player
	int id; // player id i.e. player 1,2,3 etc.
}player;

typedef struct s_direction
{
	float x; //x direction between -1 and 1 of player
	float y; //y direction between -1 and 1 of player
	int id; // player id 
}direction;

typedef struct s_mlxstack
{
	void *mlx;
	void *window;
}mlxstack;

#endif
