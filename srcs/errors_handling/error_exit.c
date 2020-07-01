#include "cube.h"

static void fill_errors_tab(char **errors_tab)
{
    errors_tab[MAP_ENTRY] = ft_strdup("[Invalid entry in .cub file.]\n");
    errors_tab[RES_ERROR] = ft_strdup("[Invalid resolution settings.]\n");
    errors_tab[TEX_ERROR] = ft_strdup("[Invalid textures.]\n");
    errors_tab[COL_ERROR] = ft_strdup("[Invalid colors.]\n");
    errors_tab[MAP_ERROR] = ft_strdup("[Invalid map.]\n");
}

static char **malloc_errors_tab()
{
    char    **result;

    result = (char **)ft_tab_new(ERRORS_NBR);
    fill_errors_tab(result);
    return (result);
}

void        error_exit(int error_code)
{
    char    **errors_tab;

    errors_tab = malloc_errors_tab();
    ft_putstr(errors_tab[error_code]);
    ft_free_tab((void **)errors_tab);
    exit (0);
}