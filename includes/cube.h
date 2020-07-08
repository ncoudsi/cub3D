/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:22:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 12:31:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_H
# define CUBE_H

# include "cube_includes.h"

int		cube_file_fd();
/*
**  KEY_HANDLING
*/

int		key_handler(int key);

/*
**	APPLICATION
*/

void	run_application(t_engine *engine);
#endif
