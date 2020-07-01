#ifndef CUBE_VECTOR_H
# define CUBE_VECTOR_H

typedef struct s_vector
{
    int x;
    int y;
}               t_vector;

/*
**  CREATORS & DESTRUCTORS
*/

t_vector    create_vector(int x, int y);
t_vector    *malloc_vector(int x, int y);
void        free_vector(t_vector *to_free);

#endif