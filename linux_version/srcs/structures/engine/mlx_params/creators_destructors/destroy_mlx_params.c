/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_mlx_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:57:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 10:28:52 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Note that mlx_destroy_image() is supposed to free both img_ptr and pixels
**	here. So we dont check for pixels afterwards or we are on a SEGV case.
*/

void	destroy_mlx_params(t_mlx_params to_destroy)
{
	if (img_ptr() != NULL)
		mlx_destroy_image(to_destroy.mlx_ptr, to_destroy.img_ptr);
	if (win_ptr() != NULL)
		mlx_destroy_window(to_destroy.mlx_ptr, to_destroy.win_ptr);
	if (mlx_ptr() != NULL)
		free(to_destroy.mlx_ptr);
}
