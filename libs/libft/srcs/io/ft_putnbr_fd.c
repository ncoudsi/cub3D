/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 21:04:53 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/25 21:05:46 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_putnbr_fd(int fd, int nb)
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
