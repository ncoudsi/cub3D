/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:01:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/16 12:15:43 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Counting the lenght of a string and returning it.
*/

size_t		ft_strlen(char *src)
{
	size_t	result;

	result = 0;
	if (src == NULL)
		return (0);
	while (src[result] != '\0')
		result++;
	return (result);
}
