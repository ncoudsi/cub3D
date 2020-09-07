/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_int_vector.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 14:46:03 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 14:52:59 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_INT_VECTOR_H
# define CUBE_INT_VECTOR_H

typedef struct	s_int_vector
{
	int x;
	int y;
}				t_int_vector;

/*
**	CREATORS & DESTRUCTORS
*/

t_int_vector	create_int_vector(int x, int y);
t_int_vector	*malloc_int_vector(int x, int y);
void			free_int_vector(t_int_vector *to_free);

#endif
