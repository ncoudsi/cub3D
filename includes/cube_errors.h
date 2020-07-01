#ifndef CUBE_ERRORS_H
# define CUBE_ERRORS_H

# define ERRORS_NBR 5
# define MAP_ENTRY 0
# define RES_ERROR 1
# define TEX_ERROR 2
# define COL_ERROR 3
# define MAP_ERROR 4

void    error_exit(int error_code);

/*
**  UTILS
*/

t_bool  is_only_digits(char *str);
t_bool  is_xpm_file(char *file_path);

#endif