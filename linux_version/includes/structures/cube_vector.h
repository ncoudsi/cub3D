/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_vector.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 13:18:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_VECTOR_H
# define CUBE_VECTOR_H

/*
**	Structure containing two coordinates, set as floats, so it can be
**	non-entire values.
*/

typedef struct	s_vector
{
	float x;
	float y;
}				t_vector;

/*
**  CREATORS & DESTRUCTORS
*/

t_vector		create_vector(float x, float y);
t_vector		*malloc_vector(float x, float y);
void			free_vector(t_vector *to_free);

#endif
