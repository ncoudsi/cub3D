/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution_parsing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:30:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:30:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static t_bool   is_valid_resolution_x(char *resolution_value)
{
    int value;

    value = ft_atoi(resolution_value);
    if (value < 300)
        return (false);
    return (true);
}

static t_bool   is_valid_resolution_y(char *resolution_value)
{
    int value;

    value = ft_atoi(resolution_value);
    if (value < 300)
        return (false);
    return (true);
}

void    resolution_parsing(char **resolution_line)
{
    if (ft_tab_len((void **)resolution_line) != 3)
        error_exit(RES_ERROR);
    else if (ft_strlen(resolution_line[0]) != 1)
        error_exit(RES_ERROR);
    else if (is_only_digits(resolution_line[1]) == false ||
            is_only_digits(resolution_line[2]) == false)
        error_exit(RES_ERROR);
    else if (is_valid_resolution_x(resolution_line[1]) == false ||
            is_valid_resolution_y(resolution_line[2]) == false)
        error_exit(RES_ERROR);
}