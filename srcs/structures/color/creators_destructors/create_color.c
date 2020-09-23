/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:55:10 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/23 16:14:37 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color create_color(unsigned char r, unsigned char g, unsigned char b)
{
    t_color result;

    result.r = r;
    result.g = g;
    result.b = b;
	result.int_color = (result.r << 16) + (result.g << 8) + result.b;
    return (result);
}
