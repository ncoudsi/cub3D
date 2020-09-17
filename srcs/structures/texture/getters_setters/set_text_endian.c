/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_text_endian.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:02:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 14:02:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_text_endian(int value, t_texture *object)
{
	object->text_endian = value;
}
