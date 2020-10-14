/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_bitmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 13:58:43 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/07 13:59:57 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_bitmap	*malloc_bitmap(void)
{
	t_bitmap	*result;

	result = (t_bitmap *)malloc(sizeof(t_bitmap));
	if (result == NULL)
		return (NULL);
	*result = create_bitmap();
	return (result);
}
