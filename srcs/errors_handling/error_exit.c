/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 15:19:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/07 16:04:31 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	fill_error_tab(char **error_tab)
{
	error_tab[MAP_ENTRY] = ft_strdup("Error\n[Invalid entry in .cub file.]\n");
	error_tab[RES_ERROR] =
	ft_strdup("Error\n[Invalid resolution settings. MIN : 300x300]\n");
	error_tab[TEX_ERROR] = ft_strdup("Error\n[Invalid textures.]\n");
	error_tab[COL_ERROR] = ft_strdup("Error\n[Invalid colors.]\n");
	error_tab[MAP_ERROR] = ft_strdup("Error\n[Invalid map.]\n");
	error_tab[FILE_ERROR] = ft_strdup("Error\n[Invalid .cub file.]\n");
	error_tab[MISS_PARAM_ERROR] =
	ft_strdup("Error\n[Map file is missing parameter.]\n");
	error_tab[DOUBLE_PARAM_ERROR] =
	ft_strdup("Error\n[A parameter is set multiple times.]\n");
	error_tab[MALLOC_ERROR] = ft_strdup("Error\n[A malloc has failed.]\n");
	error_tab[OVERFLOW_ERROR] = ft_strdup("Error\n[Risk of overflow.]\n");
	error_tab[ARG_ERROR] =
	ft_strdup("Error\n[Invalid arguments to run the program]\n");
	error_tab[BMP_ERROR] =
	ft_strdup("Error\n[Error while creating save file.]\n");
	error_tab[XPM_ERROR] = ft_strdup("Error\n[Invalid .xpm file]\n");
}

static char	**malloc_error_tab(void)
{
	char	**result;

	result = (char **)ft_tab_new(ERRORS_NBR);
	fill_error_tab(result);
	return (result);
}

void		error_exit(int error_code)
{
	char	**error_tab;

	error_tab = malloc_error_tab();
	ft_putstr(error_tab[error_code]);
	ft_free_tab((void **)error_tab);
	exit(0);
}
