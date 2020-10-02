/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:56:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 13:47:05 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	*malloc_color(unsigned char r, unsigned char g, unsigned char b)
{
	t_color *result;

	result = (t_color *)malloc(sizeof(t_color));
	if (result == NULL)
		return (NULL);
	*result = create_color(r, g, b);
	return (result);
}
