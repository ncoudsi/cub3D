/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_mlx_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:57:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/04 11:27:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_mlx_params(t_mlx_params to_destroy)
{
	free(to_destroy.mlx_ptr);
	free(to_destroy.win_ptr);
	free(to_destroy.img_ptr);
	free(to_destroy.pixels);
}
