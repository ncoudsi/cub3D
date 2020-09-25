/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:45:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/25 12:29:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static	void	fill_vector_error_tab(char **vector_error_tab)
{
	vector_error_tab[PIXEL_POS_ERROR] =
	ft_strdup("Error\n[Pixel index out of resolution range.]");
}

static	char	**malloc_vector_error_tab()
{
	char	**result;

	result = (char **)ft_tab_new(VECTOR_ERRORS_NBR);
	fill_vector_error_tab(result);
	return (result);
}

void	error_exit_vector(t_int_vector pos, int error_code)
{
	char	**vector_error_tab;

	vector_error_tab = malloc_vector_error_tab();
	ft_putstr(vector_error_tab[error_code]);
	ft_putstr(" pos.x = ");
	ft_putnbr(pos.x);
	ft_putstr(" pos.y = ");
	ft_putnbr(pos.y);ft_free_tab((void **)vector_error_tab);
	exit(0);
}
