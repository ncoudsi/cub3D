/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:38:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 16:41:00 by ncoudsi          ###   ########.fr       */
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

static void	render_sprites()
{
	int				sprite_index;
	int				stripe;
	int				encule;
	int				row;
	unsigned int	color;
	unsigned int	*tmp_sprite_pixels;
	unsigned int	*tmp_pixels;

	sprite_index = 0;
	row = 0;
	tmp_sprite_pixels = (unsigned int *)texels(sprite_texture());
	tmp_pixels = (unsigned int *)pixels();
	while (sprite_index < sprite_nbr())
	{
		set_sprite_params_values(sprite_index);
		stripe = sprite_left();
		while (stripe < sprite_right())
		{
			set_sprite_texture_pos_x((int)(256 * (stripe - (-sprite_width() / 2 + sprite_screen_x())) * dimension_x(sprite_texture()) / sprite_width()) / 256);
			if (transformed_pos_y() > 0 && stripe > 0 && stripe < resolution_x() && transformed_pos_y() < perp_wall_dist_tab_index(stripe))
			{
				row = sprite_top();
				while (row < sprite_bottom())
				{
					encule = (row) * 256 - resolution_y() * 128 + sprite_height() * 128;
					set_sprite_texture_pos_y(((encule * dimension_y(sprite_texture())) / sprite_height()) / 256);
					color = tmp_sprite_pixels[sprite_texture_pos_x() + dimension_x(sprite_texture()) * sprite_texture_pos_y()];
					if ((color & 0x00FFFFFF) != 0)
						tmp_pixels[stripe + row * resolution_x()] = color;
					row++;
				}
			}
			stripe++;
		}
		sprite_index++;
	}
}

void	rendering()
{
	t_int_vector	camera_index;

	mlx_do_sync(mlx_ptr());
	camera_index = create_int_vector(0, 0);
	while (camera_index.x < resolution_x())
	{
		camera_index.y = 0;
		set_texture_params_values(camera_index.x);
		render_ceiling(&camera_index);
		render_wall(&camera_index);
		render_floor(&camera_index);
		camera_index.x++;
	}
	// render_minimap();
	render_sprites();
	mlx_put_image_to_window(mlx_ptr(), win_ptr(), img_ptr(), 0, 0);
}
