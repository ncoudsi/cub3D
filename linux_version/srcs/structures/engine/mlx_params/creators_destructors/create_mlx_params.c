/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_mlx_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:45:55 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 14:04:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_mlx_params	create_mlx_params(void)
{
	t_mlx_params	result;

	result.mlx_ptr = NULL;
	result.win_ptr = NULL;
	result.img_ptr = NULL;
	result.pixels = NULL;
	result.bits_per_pixel = 0;
	result.size_line = 0;
	result.endian = 0;
	return (result);
}
