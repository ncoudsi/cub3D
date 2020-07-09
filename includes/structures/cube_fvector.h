/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_fvector.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:40:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 14:47:19 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_FVECTOR_H
# define CUBE_FVECTOR_H

typedef struct s_fvector
{
	float	x;
	float	y;
}				t_fvector;

/*
**	CONSTRUCTORS & DESTRUCTORS
*/

t_fvector	create_fvector(float x, float y);
t_fvector	*malloc_fvector(float x, float y);
void		free_fvector(t_fvector *to_free);
#endif
