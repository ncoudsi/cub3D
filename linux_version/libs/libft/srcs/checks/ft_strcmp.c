/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:55:32 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 10:31:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Cheking if 2 strings are entirely similar.
*/

t_bool	ft_strcmp(char *src, char *target)
{
	size_t	index;

	index = 0;
	if (src == NULL || target == NULL)
		return (0);
	while (src[index] != '\0' || target[index] != '\0')
	{
		if (src[index] != target[index])
			return (false);
		index++;
	}
	return (true);
}
