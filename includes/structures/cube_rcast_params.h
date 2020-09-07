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
    t_vector    *dir;
    t_vector    *plane;
    t_vector    *ray_dir;
    float       time;
    float       old_time;
    float       camera_x;
}               t_rcast_params;

void            load_rcast_params();

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

t_vector    *dir();
float       dir_x();
float       dir_y();
void        set_dir(t_vector *value);
t_vector    *plane();
float       plane_x();
float       plane_y();
void        set_plane(t_vector *value);
t_vector    *ray_dir();
float       ray_dir_x();
float       ray_dir_y();
void        set_ray_dir(t_vector *value);
float       rcast_time();
void        set_rcast_time(float value);
float       old_time();
void        set_old_time(float value);
float       camera_x();
void        set_camera_x(float value);

/*
**  UTILS
*/

t_vector    get_dir_value();
t_vector    get_plane_value();
#endif
