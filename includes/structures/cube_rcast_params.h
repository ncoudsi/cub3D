/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcast_params.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 10:44:20 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 10:53:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_RCAST_PARAMS_H
# define CUBE_RCAST_PARAMS_H

typedef struct  s_rcast_params
{
    t_vector    *pos;
    t_vector    *dir;
    t_vector    *plane;
    t_vector    *ray_dir;
    float       time;
    float       old_time;
    float       camera_x;
}               t_rcast_params;

/*
**  CREATORS & DESTRUCTORS
*/

t_rcast_params  create_rcast_params();
t_rcast_params  *malloc_rcast_params();
void            destroy_rcast_params(t_rcast_params to_destroy);
void            free_rcast_params(t_rcast_params *to_free);

/*
**  GETTERS & SETTERS
*/

t_vector    *rcast_pos();
float       rcast_pos_x();
float       rcast_pos_y();
void        set_rcast_pos(t_vector *value);
t_vector    *rcast_dir();
float       rcast_dir_x();
float       rcast_dir_y();
void        set_rcast_dir(t_vector *value);
t_vector    *rcast_plane();
float       rcast_plane_x();
float       rcast_plane_y();
void        set_rcast_plane(t_vector *value);
t_vector    *rcast_ray_dir();
float       rcast_ray_dir_x();
float       rcast_ray_dir_y();
void        set_rcast_ray_dir(t_vector *value);
float       rcast_time();
float       rcast_old_time();
float       rcast_camera_x();
#endif