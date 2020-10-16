/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:29:15 by ldutriez          #+#    #+#             */
/*   Updated: 2020/10/16 12:23:48 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
**	Searching for the full needle string is found in the haystack string.
**	If needle is found, returns a pointer on haystack string, starting at
**	the first character of needle. If needle is not found, returns NULL.
*/

char	*ft_strstr(char *haystack, char *needle)
{
	int	haystack_index;
	int	needle_index;

	haystack_index = 0;
	if (!*needle)
		return (haystack);
	while (haystack[haystack_index] != '\0')
	{
		needle_index = 0;
		if (needle[needle_index] == haystack[haystack_index])
		{
			while (needle[needle_index] != '\0' &&
				haystack[haystack_index + needle_index] ==
				needle[needle_index])
				needle_index++;
			if (needle[needle_index] == '\0')
				return (haystack + haystack_index);
		}
		haystack_index++;
	}
	return (NULL);
}
