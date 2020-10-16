/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:24:40 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/16 12:13:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Merging 2 strings in one. Then returns the new string. Note that we
**	allocate memory for the new string, but we do not free str1 and str2.
*/

char	*ft_strjoin(char *str1, char *str2)
{
	int		result_len;
	int		index;
	int		str1_len;
	char	*result;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	result_len = (ft_strlen(str1) + ft_strlen(str2));
	index = 0;
	str1_len = ft_strlen(str1);
	result = ft_strnew(result_len);
	if (result == NULL)
		return (NULL);
	while (index < str1_len)
	{
		result[index] = str1[index];
		index++;
	}
	index = 0;
	while (str2 != NULL && str2[index] != '\0')
	{
		result[index + str1_len] = str2[index];
		index++;
	}
	return (result);
}
