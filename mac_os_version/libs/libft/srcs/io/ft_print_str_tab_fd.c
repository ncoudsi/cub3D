/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_tab_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:01:04 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 15:01:23 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_str_tab_fd(int fd, char *p_name, char **p_tab)
{
	size_t	index;

	index = 0;
	if (p_name != NULL)
	{
		ft_putchar_fd(fd, '{');
		ft_putstr_fd(fd, p_name);
		ft_putstr_fd(fd, "}\n");
	}
	ft_putstr_fd(fd, "-----===-----\n");
	while (p_tab && p_tab[index])
	{
		ft_putnbr_fd(fd, index);
		ft_putstr_fd(fd, "--->[");
		ft_putstr_fd(fd, p_tab[index]);
		ft_putstr_fd(fd, "]\n");
		index++;
	}
	ft_putstr_fd(fd, "-----===-----\n");
}
