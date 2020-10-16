/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_nodeiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:31:29 by tguilbar          #+#    #+#             */
/*   Updated: 2020/02/25 11:14:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Applying a function to all the list's datas.
*/

void	ft_list_iter(t_list_node *list, void (*function)(void *))
{
	if (list == NULL)
		return ;
	while (list->next != NULL)
	{
		(*function)(list->data);
		list = list->next;
	}
	(*function)(list->data);
}
