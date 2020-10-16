/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:00:18 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 14:20:24 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Printing an integer value in a file.
*/

void	ft_putnbr_fd(int fd, int nbr)
{
	if (nbr < 0)
	{
		ft_putchar_fd(fd, '-');
		nbr = nbr * -1;
	}
	if (nbr >= 10)
		ft_putnbr_fd(fd, nbr / 10);
	ft_putchar_fd(fd, (nbr % 10) + '0');
}
