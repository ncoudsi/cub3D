/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:10:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 12:10:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_player	create_player()
{
	t_player	result;

	result.pos = create_vector(0, 0);
	return (result);
}
