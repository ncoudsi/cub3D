#include "cube.h"

t_bool  is_only_digits(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        if (ft_is_digit(str[index]) == false)
            return (false);
        index++;
    }
    return (true);
}