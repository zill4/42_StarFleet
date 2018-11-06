/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:49:59 by jcrisp            #+#    #+#             */
/*   Updated: 2018/10/30 23:36:48 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mlibx/mlx.h"

int main()
{
	void *mlx;
	void *window;
	int i = 0;
	mlx = mlx_init();
	window = mlx_new_window(mlx, 1000, 1000, "Title");
	while (i < 500)
	{
		mlx_pixel_put(mlx, window, 500 + i, 500 - i, 663);
		i++;
	}	
	mlx_loop(mlx);
	return (0);
}
