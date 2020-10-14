/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_render_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:08:51 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/15 12:10:10 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	free_render_params(t_render_params *to_free)
{
	destroy_render_params(*to_free);
	free(to_free);
}
