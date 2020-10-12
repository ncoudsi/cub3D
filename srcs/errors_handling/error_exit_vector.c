/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:45:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:25:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static	void	fill_vector_error_tab(char **vector_error_tab)
{
	vector_error_tab[PIXEL_POS_ERROR] =
	ft_strdup("Error\n[Pixel index out of resolution range.]");
}

static	char	**malloc_vector_error_tab(void)
{
	char	**result;

	result = (char **)ft_tab_new(VECTOR_ERRORS_NBR);
	fill_vector_error_tab(result);
	return (result);
}

void			error_exit_vector(t_int_vector pos, int error_code)
{
	char	**vector_error_tab;

	vector_error_tab = malloc_vector_error_tab();
	ft_putstr_fd(vector_error_tab[error_code], 2);
	ft_putstr_fd(" pos.x = ", 2);
	ft_putnbr(pos.x);
	ft_putstr_fd(" pos.y = ", 2);
	ft_putnbr(pos.y);
	ft_free_tab((void **)vector_error_tab);
	close_game();
}
