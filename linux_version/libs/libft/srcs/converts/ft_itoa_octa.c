/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_octa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:36:45 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 13:40:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Converting an integer value into a string filled with numerical characters
**	refering to the value, in an octadecimal base.
*/

char	*ft_itoa_octa(long long int nbr)
{
	char	*base;
	char	*result;

	base = "01234567";
	result = ft_itoa_base(nbr, base);
	return (result);
}
