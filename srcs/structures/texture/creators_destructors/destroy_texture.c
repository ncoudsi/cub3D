/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:12:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 12:38:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_texture(t_texture to_destroy)
{
	free(to_destroy.text_ptr);
	free(to_destroy.path);
	free_int_vector(to_destroy.dimension);
	free(to_destroy.texels);
}
