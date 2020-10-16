/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:55:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/16 12:26:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Troncating a string from the start index of src until len characters
**	are copied. Returns a heap allocated string. Note that we do not free src.
*/

char	*ft_strsub(char *src, size_t start, size_t len)
{
	size_t	index;
	char	*result;

	index = 0;
	result = NULL;
	if (src == NULL || len == 0 || start + len > ft_strlen(src) )
		return (NULL);
	result = ft_strnew(len);
	if (result == NULL)
		return (NULL);
	while (index < len)
	{
		result[index] = src[start + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
