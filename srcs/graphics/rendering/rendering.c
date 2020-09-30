/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:38:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 13:44:48 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	render_ceiling(t_int_vector *camera_index)
{
	t_color	ceiling_color;

	ceiling_color = create_color(70, 100, 225);
	while (camera_index->y < wall_top())
	{
		put_pixel(*camera_index, ceiling_color);
		camera_index->y++;
	}
}

static void	render_wall(t_int_vector *camera_index)
{
	float	float_text_y;

	while (camera_index->y < wall_bottom())
	{
		calculate_texture_step(camera_index);
		float_text_y = (wall_top() - resolution_y() / 2 + wall_height() / 2) * texture_step();
		float_text_y += ((camera_index->y - wall_top()) * texture_step());
		set_texture_pos_y((int)float_text_y);
		set_texture_pos_x(texture_pos_x_tab_index(camera_index->x));
		if (side_tab_index(camera_index->x) == 0)
			we_texture_color(camera_index);
		else if (side_tab_index(camera_index->x) == 1)
			no_texture_color(camera_index);
		else if (side_tab_index(camera_index->x) == 2)
			ea_texture_color(camera_index);
		else
			so_texture_color(camera_index);
		camera_index->y++;
	}
}

static void	render_floor(t_int_vector *camera_index)
{
	t_color	floor_color;

	floor_color = create_color(200, 150, 20);
	while (camera_index->y < resolution_y())
	{
		put_pixel(*camera_index, floor_color);
		camera_index->y++;
	}
}

// static void	render_sprites()
// {
// 	int			sprite_index;
// 	t_vector	*pos;
// 	t_vector	relative_pos;
// 	float		inverted_matrix;
// 	t_vector	transformed_pos;
// 	int			sprite_screen_x;
// 	int			sprite_height;
// 	int			sprite_top;
// 	int			sprite_bottom;
// 	int			sprite_width;
// 	int			sprite_left;
// 	int			sprite_right;
// 	int			stripe;

// 	sprite_index = 0;
// 	while (sprite_index < sprite_nbr())
// 	{
// 		pos = (t_vector *)sprite_pos(g_engine->render_params->sprite_tab[sprite_index]);
// 		relative_pos = create_vector(pos->x - pos_x(), pos->y - pos_y());
// 		inverted_matrix = 1.0f / (plane_x() * dir_y() - dir_x() *plane_y());
// 		transformed_pos.x = inverted_matrix * (dir_y() * relative_pos.x - dir_x() * relative_pos.y);
// 		transformed_pos.y = inverted_matrix * (-plane_y() * relative_pos.x + plane_x() * relative_pos.y);
// 		sprite_screen_x = (int)((resolution_x() / 2) * (1 + transformed_pos.x / transformed_pos.y));
// 		sprite_height = (int)(resolution_y() / transformed_pos.y);
// 		if (sprite_height < 0)
// 			sprite_height *= -1;
// 		sprite_top = -sprite_height / 2 + resolution_y() / 2;
// 		if (sprite_top < 0)
// 			sprite_top = 0;
// 		sprite_bottom = sprite_height / 2 + resolution_y() / 2;
// 		if (sprite_bottom >= resolution_y())
// 			sprite_bottom = resolution_y() - 1;
// 		sprite_width = (int)(resolution_y() / transformed_pos.y);
// 		if (sprite_width < 0)
// 			sprite_width *= -1;
// 		sprite_left = -sprite_width / 2 + sprite_screen_x;
// 		if (sprite_left < 0)
// 			sprite_left = 0;
// 		sprite_right = sprite_width / 2 + sprite_screen_x;
// 		if (sprite_right >= resolution_x())
// 			sprite_right = resolution_x() - 1;
// 		stripe = sprite_left;
// 		while (stripe < sprite_right)
// 		{
// 			stripe++;
// 		}
// 		sprite_index++;
// 	}
// }

// //loop through every vertical stripe of the sprite on screen
//       for(int stripe = drawStartX; stripe < drawEndX; stripe++)
//       {
//         int texX = int(256 * (stripe - (-spriteWidth / 2 + spriteScreenX)) * texWidth / spriteWidth) / 256;
//         //the conditions in the if are:
//         //1) it's in front of camera plane so you don't see things behind you
//         //2) it's on the screen (left)
//         //3) it's on the screen (right)
//         //4) ZBuffer, with perpendicular distance
//         if(transformY > 0 && stripe > 0 && stripe < w && transformY < ZBuffer[stripe])
//         for(int y = drawStartY; y < drawEndY; y++) //for every pixel of the current stripe
//         {
//           int d = (y) * 256 - h * 128 + spriteHeight * 128; //256 and 128 factors to avoid floats
//           int texY = ((d * texHeight) / spriteHeight) / 256;
//           Uint32 color = texture[sprite[spriteOrder[i]].texture][texWidth * texY + texX]; //get current color from the texture
//           if((color & 0x00FFFFFF) != 0) buffer[y][stripe] = color; //paint pixel if it isn't black, black is the invisible color

void	rendering()
{
	t_int_vector	camera_index;

	mlx_do_sync(mlx_ptr());
	camera_index = create_int_vector(0, 0);
	while (camera_index.x < resolution_x())
	{
		camera_index.y = 0;
		set_texture_params(camera_index.x);
		render_ceiling(&camera_index);
		render_wall(&camera_index);
		render_floor(&camera_index);
		camera_index.x++;
	}
	// render_minimap();
	// set_sprite_params();
	// render_sprites();
	mlx_put_image_to_window(mlx_ptr(), win_ptr(), img_ptr(), 0, 0);
}
