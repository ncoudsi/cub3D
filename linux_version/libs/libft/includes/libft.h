/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:06:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/16 11:24:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft_includes.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# define IS_NOT_A_LINE 2
# define IS_A_LINE 1
# define IS_END_OF_FILE 0
# define IS_AN_ERROR -1

/*
**	FILE
*/

int				get_next_line(int fd, char **line);
char			**ft_get_file(char *path);

/*
**	STRING
*/

char			*ft_strnew(size_t len);
char			*ft_strdup(char *src);
char			*ft_strduc(char c);
size_t			ft_strlen(char	*src);
size_t			ft_strlen_arg(char *str, char c);
char			*ft_strcpy(char *src, char *dest);
char			*ft_strsub(char *src, size_t start, size_t len);
char			*ft_strjoin(char *str1, char *str2);
char			*ft_strstr(char *haystack, char *needle);
char			**ft_split(char *src, char sep);
void			ft_str_add_prefixe(char *prefixe, char **str);
void			ft_str_add_suffix(char **str, char *suffix);
int				ft_str_count_c(char *str, char c);
char			*ft_strnstr(char *haystack, char *needle, size_t len);
char			*ft_rm_charset(char *str, char *charset);

/*
** CHECKS
*/

t_bool			is_char_in_str(char to_find, char *str);
t_bool			ft_is_only_digits(char *str);
t_bool			ft_is_digit(char c);
t_bool			ft_strcmp(char *src, char *target);
t_bool			ft_is_charset_in_str(char *str, char *to_find);
t_bool			ft_is_white_space(char c);
t_bool			ft_is_upper(char c);
t_bool			ft_is_lower(char c);
t_bool			ft_is_alpha(char c);
t_bool			ft_is_alpha_num(char c);
t_bool			ft_is_valid_file_path(char *path);

/*
** CONVERTS
*/

float			ft_float_roof(float value);
float			ft_float_floor(float value);
float			ft_float_round(float value);
int				ft_int_abs(int value);
float			ft_float_abs(float value);
char			*ft_itoa_base(long long int nbr, char *base);
char			*ft_itoa(long long int nbr);
char			*ft_itoa_hexa(long long int nbr);
char			*ft_itoa_octa(long long int nbr);
int				ft_atoi(char *str);

/*
** INPUT / OUTPUT
*/

void			ft_putchar(char c);
void			ft_putchar_fd(int fd, char c);
void			ft_putchar_fp(char *path, char c, char *mode);
void			ft_putstr(char *str);
void			ft_putstr_fd(int fd, char *str);
void			ft_putstr_fp(char *path, char *str, char *mode);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int fd, int nb);
void			ft_putnbr_fp(char *path, int nb, char *mode);
void			ft_print_str_tab(char *name, char **tab);
void			ft_print_str_tab_fd(int fd, char *name, char **tab);
void			ft_print_str_tab_fp(char *path,
				char *name, char **tab, char *mode);
void			ft_print_int_tab(char *name, int *tab, size_t len);
void			ft_print_int_tab_fd(int fd,
				char *name, int *tab, size_t len);

/*
**	2D ARRAYS
*/

void			**ft_tab_new(int size);
int				ft_tab_len(void	**tab);
void			ft_free_tab(void **tab);
void			ft_tab_cpy(void **dst, void **src);
void			ft_add_to_tab(void *to_add, void ***tab);

#endif
