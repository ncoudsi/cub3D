/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 18:47:24 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/26 19:55:40 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

__attribute__ ((destructor)) void ft_quit(void)
{
	;
	// system("leaks a.out");
}

int		main(void)
{
	char 	*str;
	char	*str2;
	char 	**str_tab;
	int		int_tab[7] = {7,27,06,28,24,42,29};
	str = ft_strdup("zSzawwwwwzlzut zlzezs gars, c'est un testzwwwwwwwwww");
	str2 = ft_strdup("test");
	printf("\n%s\n", str);
	str = ft_rm_charset(str, "wz");
	printf("%s\n", str);

	printf("\n Does the file exist :%d\n", ft_file_exist("tmp.h"));

	str_tab = (char**)malloc(sizeof(char*) * (2 + 1));
	if (str_tab == NULL)
		return (0);
	str_tab[2] = NULL;
	str_tab[0] = str;
	str_tab[1] = str2;
	ft_print_str_tab_fd(2, "Deux chaines de test", str_tab);
	ft_print_int_tab_fd(2, NULL, int_tab, 7);

	// t_char_list c_tab;
// 
	// c_tab = create_char_list(2);
	// ft_char_list_push_back(&c_tab, str);
	// ft_char_list_push_back(&c_tab, str2);
	// int i;
	// i = 0;
	// while (c_tab.data[i])
	// {
	// 	printf("%s\n", c_tab.data[i]);
	// 	i++;
	// }
	// destroy_t_char_list(c_tab);

	ft_putnbr_fd(2, 492);
	ft_putchar_fd(2, '\n');
	if (ft_file_exist("text.txt"))
		ft_putstr_fp("text.txt", "Lol I overwrite\n", "OVERWRITE");
	else
		ft_putstr_fp("text.txt", "Hey this is a test\nman\n", "CREATE");
	ft_putstr_fp("text.txt", "That's insane bro\n", "APPEND");
	ft_putnbr_fp("text.txt", 42, "APPEND");
	ft_putchar_fp("text.txt", '\n', "APPEND");
	ft_putstr_fp("text.txt", "lol I'm dumb\n", "APPOUND");
	ft_print_str_tab_fp("text.txt", "Deux chaines de test", str_tab, "APPEND");
	ft_free_tab((void**)str_tab);
	return (0);
}
