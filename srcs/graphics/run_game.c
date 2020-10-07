/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:44:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/07 07:58:16 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	run_game(void)
{
	mlx_loop_hook(mlx_ptr(), &update_game, NULL);
	mlx_hook(win_ptr(), KEY_PRESS, (1L << 0), &key_press, NULL);
	mlx_hook(win_ptr(), KEY_RELEASE, (1L << 1), &key_release, NULL);
	mlx_loop(mlx_ptr());
}
