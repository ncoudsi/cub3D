/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:19:55 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/16 11:54:31 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copying the characters of src string in dest string. Returns dest after the
**	copy. Note that we do not proceed to any memory allocation.
*/

char	*ft_strcpy(char *src, char *dest)
{
	int	index;

	index = 0;
	if (src == NULL || dest == NULL)
		return (NULL);
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
