/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 14:13:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/16 12:30:12 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculating the number of entries in a 2 dimensions array.
*/

int	ft_tab_len(void **tab)
{
	int	index;

	index = 0;
	if (tab == NULL)
	{
		return (index);
	}
	while (tab[index] != NULL)
		index++;
	return (index);
}
