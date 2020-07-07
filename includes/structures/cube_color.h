/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_color.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:50:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/07 13:54:01 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_COLOR_H
# define CUBE_COLOR_H

typedef struct  s_color
{
    unsigned char   r;
    unsigned char   g;
    unsigned char   b;
}               t_color;

/*
**  CREATORS & DESTRUCTORS
*/

t_color create_color(unsigned char r, unsigned char g, unsigned char b);
t_color *malloc_color(unsigned char r, unsigned char g, unsigned char b);
void    free_color(t_color *to_free);

#endif