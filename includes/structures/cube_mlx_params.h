/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_mlx_params.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:41:38 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 10:50:16 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_MLX_PARAMS
# define CUBE_MLX_PARAMS

typedef struct s_mlx_params
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
	char	*pixels;
	int		bits_per_pixel;
	int		size_line;
	int		endian;
}				t_mlx_params;

/*
**	CREATORS & DESTRUCTORS
*/

t_mlx_params	create_mlx_params();
t_mlx_params	*malloc_mlx_params();
void			destroy_mlx_params(t_mlx_params to_destroy);
void			free_mlx_params(t_mlx_params	*to_free);
#endif
