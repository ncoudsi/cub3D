NAME	=		libft.a

CC 		=		clang

SRC_DIR = 		$(shell find srcs -type d)
INC_DIR = 		$(shell find includes -type d)
OBJ_DIR = 		objs

vpath %.c $(foreach dir, $(SRC_DIR), $(dir):)

#SRC = $(foreach dir, $(SRC_DIR), $(foreach file, $(wildcard $(dir)/*.c), $(notdir $(file))))
SRC 	=		ft_float_abs.c ft_float_floor.c ft_float_roof.c ft_int_abs.c \
				ft_itoa_base.c ft_itoa.c ft_atoi.c ft_itoa_hexa.c ft_itoa_octa.c \
				ft_float_round.c \
				\
				ft_strdup.c ft_strdup_c.c ft_strlen.c ft_strnew.c \
				ft_strcpy.c ft_strsub.c ft_strstr.c ft_str_count_c.c ft_rm_charset.c\
				ft_strjoin.c ft_split.c ft_str_add_prefixe.c ft_str_add_suffix.c \
				ft_str_count_c.c ft_strnstr.c \
				\
				ft_is_only_digits.c ft_is_digit.c ft_strcmp.c ft_is_charset_in_str.c \
				ft_is_alpha.c ft_is_lower.c ft_is_upper.c ft_is_alpha_num.c \
				ft_is_char_in_str.c ft_is_white_space.c ft_is_valid_file_path.c\
				\
				ft_putchar.c ft_putchar_fd.c ft_putchar_fp.c \
				ft_putstr.c ft_putstr_fd.c ft_putstr_fp.c \
				ft_putnbr.c ft_putnbr_fd.c ft_putnbr_fp.c \
				get_next_line.c ft_get_file.c \
				ft_print_str_tab.c ft_print_str_tab_fd.c ft_print_str_tab_fp.c\
				ft_print_int_tab_fd.c ft_print_int_tab.c \
				\
				ft_free_tab.c ft_tab_cpy.c ft_tab_new.c ft_tab_len.c \
				ft_add_to_tab.c \
				\
				ft_list_add_back.c ft_list_clear.c ft_list_map.c \
				ft_list_size.c ft_list_add_front.c ft_malloc_node.c \
				ft_list_iter.c ft_list_remove_node.c

OBJ		=		$(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))

#Compilation flag
CFLAGS	=		-Wall -Wextra -Werror

#Include flag
IFLAGS	=		$(foreach dir, $(INC_DIR), -I$(dir))

#Library flag
LFLAGS	=		$(foreach lib_dir, $(LIB_DIR), -L $(lib_dir)) $(foreach lib, $(LIB), -l $(lib))

all:
				@echo "\n___$(NAME) Setting___\n"
				@make $(NAME)

$(NAME):		$(OBJ) Makefile
				@echo "-----\nCompiling $@ ... \c"
				@ar rc $(NAME) $(OBJ)
				@ranlib $(NAME)
				@echo "DONE\n-----"

show:
				@echo "\nSRC :\n$(SRC)\n"
				@echo "OBJ :\n$(OBJ)\n"
				@echo "CFLAGS :\n$(CFLAGS)\n"
				@echo "IFLAGS :\n(IFLAGS)\n"
				@echo "LFLAGS :\n$(LFLAGS)\n"
				@echo "LIB_DIR :\n$(LIB_DIR)\n"

$(OBJ_DIR)/%.o : 	%.c
				@echo "Compiling $@ ... \c"
				@mkdir -p $(OBJ_DIR)
				@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<
				@echo "DONE"

re:					fclean all

clean:
				@echo "Deleting Objects Directory $(OBJ_DIR) ... \c"
				@rm -rf $(OBJ_DIR)
				@echo "DONE\n-----"

fclean:				clean
				@echo "Deleting library File $(NAME) ... \c"
				@rm -f $(NAME)
				@echo "DONE\n-----"

.PHONY:				all show re clean fclean