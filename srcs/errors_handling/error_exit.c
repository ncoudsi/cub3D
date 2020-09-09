/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:47:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 11:47:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static	void	fill_error_tab(char **error_tab)
{
	error_tab[MAP_ENTRY] = ft_strdup("[Invalid entry in .cub file.]\n");
	error_tab[RES_ERROR] = ft_strdup("[Invalid resolution settings. MIN : 400x300, MAX : 1920x1080]\n");
	error_tab[TEX_ERROR] = ft_strdup("[Invalid textures.]\n");
	error_tab[COL_ERROR] = ft_strdup("[Invalid colors.]\n");
	error_tab[MAP_ERROR] = ft_strdup("[Invalid map.]\n");
	error_tab[FILE_ERROR] = ft_strdup("[Invalid map file.]\n");
	error_tab[MISS_PARAM_ERROR] = ft_strdup("[Map file is missing parameter.]\n");
	error_tab[DOUBLE_PARAM_ERROR] = ft_strdup("[A parameter is set multiple times.]\n");
	error_tab[MALLOC_ERROR] = ft_strdup("[A malloc has failed.]\n");
}

static	char	**malloc_error_tab()
{
	char	**result;

	result = (char **)ft_tab_new(ERRORS_NBR);
	fill_error_tab(result);
	return (result);
}

void			error_exit(int error_code)
{
	char	**error_tab;

	error_tab = malloc_error_tab();
	ft_putstr(error_tab[error_code]);
	ft_free_tab((void **)error_tab);
	exit(0);
}
