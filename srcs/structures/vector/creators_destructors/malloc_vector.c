#include "cube.h"

t_vector    *malloc_vector(int x, int y)
{
    t_vector    *result;

    result = (t_vector *)malloc(sizeof(t_vector));
    if (result == NULL)
        return (NULL);
    *result = create_vector(x, y);
    return (result);
}