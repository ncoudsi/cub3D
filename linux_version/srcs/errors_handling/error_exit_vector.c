/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:45:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:37:22 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Fill the error tab with all the error messages.
*/

static	void	fill_vector_error_tab(char **vector_error_tab)
{
	vector_error_tab[PIXEL_POS_ERROR] =
	ft_strdup("Error\n[Pixel index out of resolution range.]");
}

/*
**	Memory allocation for the error tab, containing all error messages.
*/

static	char	**malloc_vector_error_tab(void)
{
	char	**result;

	result = (char **)ft_tab_new(VECTOR_ERRORS_NBR);
	fill_vector_error_tab(result);
	return (result);
}

/*
**	When an error occurs in the program related to a coordinate,
**	write a message on standard error, with the coordinates,
**	then close the program.
*/

void			error_exit_vector(t_int_vector pos, int error_code)
{
	char	**vector_error_tab;

	vector_error_tab = malloc_vector_error_tab();
	ft_putstr_fd(2, vector_error_tab[error_code]);
	ft_putstr_fd(2, " pos.x = ");
	ft_putnbr(pos.x);
	ft_putstr_fd(2, " pos.y = ");
	ft_putnbr(pos.y);
	ft_free_tab((void **)vector_error_tab);
	close_game();
}
