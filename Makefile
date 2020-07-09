# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/03 15:39:58 by ncoudsi           #+#    #+#              #
#    Updated: 2020/07/09 12:00:43 by ncoudsi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Cub3D

CC			=	gcc

SRCS_DIR	= 	$(shell find srcs -type d)
INC_DIR		= 	$(shell find includes -type d) \
				$(shell find libs/libft/includes -type d)
LIB_DIR		=	libs/libft libs/mlx
OBJS_DIR	= 	objs

vpath %.c $(foreach dir, $(SRCS_DIR), $(dir))

# List de toute les library a linker au projet (le nom - le lib et - le .a)
LIB			=	ft mlx mlx_Linux

#SRCS = $(foreach dir, $(SRCS_DIR), $(foreach file, $(wildcard $(dir)/*.c), $(notdir $(file))))

SRCS		=	cube.c cube_file_fd.c get_pixel_index.c \
				\
				create_vector.c malloc_vector.c free_vector.c \
				\
				create_color.c malloc_color.c free_color.c \
				\
				create_player.c malloc_player.c destroy_player.c free_player.c \
				\
				create_map_params.c malloc_map_params.c destroy_map_params.c \
				free_map_params.c fill_map_params.c get_map_file.c \
				cube_file_parsing.c resolution_parsing.c colors_parsing.c \
				map_parsing.c is_cardinal_point.c textures_parsing.c \
				fill_params.c fill_map.c is_walled.c is_tile.c is_valid_map_entry.c \
				is_valid_line_len.c is_only_digits.c is_xpm_file.c \
				\
				create_mlx_params.c malloc_mlx_params.c destroy_mlx_params.c free_mlx_params.c \
				\
				create_engine.c malloc_engine.c destroy_engine.c free_engine.c \
				get_mlx_ptr.c set_mlx_ptr.c get_win_ptr.c set_win_ptr.c \
				get_img_ptr.c set_img_ptr.c get_pixels.c set_pixels.c \
				get_bits_per_pixel.c set_bits_per_pixel.c get_size_line.c \
				set_size_line.c get_endian.c set_endian.c \
				\
				run_application.c \
				\
				key_handler.c \
				\
				error_exit.c \

OBJS		=	$(addprefix $(OBJS_DIR)/, $(SRCS:%.c=%.o))

#Compilation flag
CFLAGS		=	-Wall -Wextra -Werror -fsanitize=address -g3

IFLAGS		=	$(foreach dir, $(INC_DIR), -I$(dir)) -I libs/mlx

LFLAGS		=	$(foreach dir, $(LIB_DIR), -L $(dir)) \
				$(foreach lib, $(LIB), -l $(lib)) \

all:					$(NAME)

show:
				@echo "SRCS :\n$(SRCS)"
				@echo "\nOBJS :\n$(OBJS)"
				@echo "\nCFLAGS :\n$(CFLAGS)"
				@echo "\nIFLAGS :\n$(IFLAGS)"
				@echo "\nLFLAGS :\n$(LFLAGS)"
				@echo "\nLIB_DIR:\n$(LIB_DIR)"
				@echo "\nINC_DIR :\n$(INC_DIR)"

install:
				$(foreach dir, $(LIB_DIR), make -C $(dir) ; )

re-install:
				$(foreach dir, $(LIB_DIR), make -C $(dir) re ; )

$(OBJS_DIR)/%.o :		%.c
				@echo "Compiling $@ ... \c"
				@mkdir -p $(OBJS_DIR)
				@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<
				@echo "DONE"


$(NAME): 				$(INC_DIR) $(OBJS) Makefile
				@echo "-----\nCreating Executable $@ ... \c"
				@$(CC) $(LFLAGS) -o $(NAME) $(OBJS) libs/mlx/libmlx.a libs/mlx/libmlx_Linux.a libs/libft/libft.a $(CFLAGS) -lXext -lX11 -lm -lbsd
				@echo "DONE\n-----"

norme:
				norminette $(SRCS_DIR)

re:						fclean all

exec:					all
				@./$(NAME)

clean:
				@echo "Deleting Objects Directory $(OBJS_DIR) ... \c"
				@rm -rf $(OBJS_DIR)
				@echo "DONE\n-----"

fclean:					clean
				@echo "Deleting Binary File $(NAME) ... \c"
				@rm -f $(NAME) $(BONUS_NAME)
				@echo "DONE\n-----"

.PHONY: 				all clean flcean re show exec norme bonus
