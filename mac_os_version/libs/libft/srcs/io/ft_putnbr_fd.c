/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:00:18 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 15:01:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int fd, int nb)
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
