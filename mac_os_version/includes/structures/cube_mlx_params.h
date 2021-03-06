/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_mlx_params.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:41:38 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 13:05:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_MLX_PARAMS_H
# define CUBE_MLX_PARAMS_H

/*
**	Structure containing all the parameters needed to run the MLX functions.
*/

typedef struct	s_mlx_params
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
	char	*pixels;
	int		bits_per_pixel;
	int		size_line;
	int		endian;
}				t_mlx_params;

void			load_mlx_params(void);

/*
**	CREATORS & DESTRUCTORS
*/

t_mlx_params	create_mlx_params(void);
t_mlx_params	*malloc_mlx_params(void);
void			destroy_mlx_params(t_mlx_params to_destroy);
void			free_mlx_params(t_mlx_params	*to_free);

/*
**	GETTERS & SETTERS
*/

void			*mlx_ptr();
void			set_mlx_ptr(void *value);
void			*win_ptr();
void			set_win_ptr(void *value);
void			*img_ptr();
void			set_img_ptr(void *value);
char			*pixels();
void			set_pixels(char *value);
int				bits_per_pixel();
void			set_bits_per_pixel(int value);
int				size_line();
void			set_size_line(int value);
int				endian();
void			set_endian(int value);

#endif
