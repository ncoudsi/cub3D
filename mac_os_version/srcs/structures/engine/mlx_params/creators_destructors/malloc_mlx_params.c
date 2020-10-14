/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_mlx_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:56:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 14:03:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_mlx_params	*malloc_mlx_params(void)
{
	t_mlx_params	*result;

	result = (t_mlx_params *)malloc(sizeof(t_mlx_params));
	if (result == NULL)
		return (NULL);
	*result = create_mlx_params();
	return (result);
}
