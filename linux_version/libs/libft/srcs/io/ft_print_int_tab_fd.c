/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_tab_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:52:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:52:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_int_tab_fd(int fd, char *p_name, int *p_tab, size_t len)
{
	size_t		index;

	index = 0;
	if (p_name != NULL)
	{
		ft_putchar_fd(fd, '{');
		ft_putstr_fd(fd, p_name);
		ft_putstr_fd(fd, "}\n");
	}
	ft_putstr_fd(fd, "-----===-----\n");
	while (p_tab && index < len)
	{
		ft_putnbr_fd(fd, index);
		ft_putstr_fd(fd, "--->[");
		ft_putnbr_fd(fd, p_tab[index]);
		ft_putstr_fd(fd, "]\n");
		index++;
	}
	ft_putstr_fd(fd, "-----===-----\n");
}
