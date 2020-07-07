/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:55:10 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/07 13:56:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color create_color(unsigned char r, unsigned char g, unsigned char b)
{
    t_color result;

    result.r = r;
    result.g = g;
    result.b = b;
    return (result);
}