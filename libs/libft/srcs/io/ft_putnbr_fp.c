/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 21:04:53 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/25 21:05:46 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int file_overwrite(char *path)
{
    int fd;

    fd = -1;
    if (ft_file_exist(path))
        fd = open(path, O_WRONLY | O_TRUNC);
    return (fd);
}

static int file_append(char *path)
{
    int fd;
    
    fd = -1;
    if (ft_file_exist(path))
        fd = open(path, O_WRONLY | O_APPEND);
    return (fd);
}

static int file_create(char *path)
{    
    int fd;
    
    fd = -1;
    if (ft_file_exist(path) == false)
        fd = open(path, O_WRONLY | O_APPEND | O_CREAT, 00700);
    return (fd);
}

void  ft_putnbr_fp(char *path, int nb, char *mode)
{
    int     fd;

    fd = -1;
	if (mode == NULL || path == NULL)
		return ;
    if (ft_strcmp(mode, "OVERWRITE"))
    {
        fd = file_overwrite(path);
    }
    else if (ft_strcmp(mode, "APPEND"))
    {
        fd = file_append(path);
    }
    else if (ft_strcmp(mode, "CREATE"))
    {
        fd = file_create(path);
    }
    if (fd != -1)
	{
		if (nb < 0)
		{
			ft_putchar_fd(fd, '-');
			nb = nb * -1;
		}
		if (nb >= 10)
		{
			ft_putnbr_fd(fd, nb / 10);
		}
		ft_putchar_fd(fd, (nb % 10) + '0');
	}
    close(fd);
}
