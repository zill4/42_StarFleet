#include "game.h"
#include "./mlibx/mlx.h"
int worldMap[mapWidth][mapHeight] = {
  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,2,2,2,2,2,0,0,0,0,3,0,3,0,3,0,0,0,1},
  {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,3,0,0,0,3,0,0,0,1},
  {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,2,2,0,2,2,0,0,0,0,3,0,3,0,3,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,4,0,0,0,0,5,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,4,0,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	if (!str)
		return ;
	int i;
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
int  deal_key(int key, void *param)
{
	float *val;
	*val = 0.0;
	ft_putchar('X');
	if (key == 126){
		ft_putstr("up\n");
		*val = 1.0;
	}
	else if (key == 124){
		ft_putstr("right\n");
		*val = .5;
	}
	else if (key == 125){
		ft_putstr("down\n");
		*val  = -1.0;
	}
	else if (key == 123){
		ft_putstr("left\n");
		*val = -.5;
	}
	param = (void*)val;
	return (0);
}
void	cast(void *mlx, void *window, float x_pos, float y_pos)
{
	mlx_pixel_put(mlx, window, 500 + x_pos, 500 + y_pos, 663);	
}

int main()
{

    double posX = 22, posY = 12; // x and y start position
    double dirX = -1, dirY = 0; // initial direction vector
    double planeX, planeY = 0.66; //the 2d raycaster version of the camera plane.
	
	player *p1;
	direction *d1;
	d1 = (direction*)malloc(sizeof(direction));
	d1->x = 0;
	d1->y = 1;
	d1->id = 1;
	p1 = (player*)malloc(sizeof(player));
	p1->x = 22;
	p1->y = 12;
    p1->id = 1;
	
	double time = 0; //time of current frame
    double oldTime = 0; //time of pervious frame 
	int x = 0;
	int y = 0;
	mlxstack *mstack;
	mstack = (void*)malloc(sizeof(mlxstack));
	mstack->mlx = mlx_init();
	mstack->window = mlx_new_window(mstack->mlx, 1000, 1000, "window");
	//void *mlx;
	//void *window;

	int i = 0;
	float c = 0.0;
	//mlx = mlx_init();
	//window = mlx_new_window(mlx, 1000, 1000, "Map Maker");
	//mlx_pixel_put(mlx, window, 500, 500, 663);		
	mlx_key_hook(mstack->window, deal_key, &c);
	printf("data: %f\n",c);
	mlx_loop(mstack->mlx);
	return (0);
}
