/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:11:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 12:12:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_player	*malloc_player()
{
	t_player	*result;

	result = (t_player *)malloc(sizeof(t_player));
	if (result == NULL)
		return (NULL);
	*result = create_player();
	return (result);
}
