# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/03 15:39:58 by ncoudsi           #+#    #+#              #
#    Updated: 2020/10/15 09:43:35 by ncoudsi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	cub3D

CC			=	clang

SRCS_DIR	= 	$(shell find srcs -type d)
INC_DIR		= 	$(shell find includes -type d) \
				$(shell find libs/libft/includes -type d)
LIB_DIR		=	libs/libft libs/mlx
OBJS_DIR	= 	objs

vpath %.c $(foreach dir, $(SRCS_DIR), $(dir))

# List de toute les library a linker au projet (le nom - le lib et - le .a)
LIB			=	ft mlx
FRAMEWORK	=	OpenGL Appkit

#SRCS = $(foreach dir, $(SRCS_DIR), $(foreach file, $(wildcard $(dir)/*.c), $(notdir $(file))))

SRCS		=	cube.c cube_file_fd.c \
				\
				create_vector.c malloc_vector.c free_vector.c \
				\
				create_int_vector.c malloc_int_vector.c free_int_vector.c \
				\
				create_texture.c destroy_texture.c malloc_texture.c free_texture.c \
				load_textures.c get_bits_per_texel.c set_bits_per_texel.c \
				get_dimension.c set_dimension.c get_dimension_x.c set_dimension_x.c \
				get_dimension_y.c set_dimension_y.c get_path.c set_path.c get_texels.c \
				set_texels.c get_text_endian.c set_text_endian.c get_text_ptr.c set_text_ptr.c \
				get_text_size_line.c set_text_size_line.c \
				\
				create_color.c malloc_color.c free_color.c \
				\
				create_moves.c malloc_moves.c free_moves.c \
				\
				create_sprite.c destroy_sprite.c malloc_sprite.c free_sprite.c free_sprite_tab.c \
				get_sprite_pos.c get_sprite_pos_x.c get_sprite_pos_y.c set_sprite_pos.c set_sprite_pos_x.c \
				set_sprite_pos_y.c get_sprite_dist.c set_sprite_dist.c \
				\
				create_text_render.c destroy_text_render.c malloc_text_render.c free_text_render.c \
				get_wall_bottom.c set_wall_bottom.c get_wall_height.c set_wall_height.c get_wall_hitpoint_x.c \
				set_wall_hitpoint_x.c get_wall_top.c set_wall_top.c get_texture_step.c set_texture_step.c \
				get_texture_pos.c set_texture_pos.c get_texture_pos_x.c set_texture_pos_x.c get_texture_pos_y.c \
				set_texture_pos_y.c get_texture_pos_x_tab.c set_texture_pos_x_tab.c \
				get_texture_pos_x_tab_index.c \
				\
				create_sprite_render.c destroy_sprite_render.c malloc_sprite_render.c free_sprite_render.c \
				get_sprite_nbr.c set_sprite_nbr.c get_sprite_tab.c get_sprite_tab_index.c set_sprite_tab_index.c \
				load_render_params.c set_sprite_tab_dist.c sort_sprite_tab.c get_absolute_sprite_pos.c \
				set_absolute_sprite_pos.c get_relative_sprite_pos.c set_relative_sprite_pos.c \
				get_inverted_matrix.c set_inverted_matrix.c get_transformed_pos.c set_transformed_pos.c \
				get_sprite_screen_x.c set_sprite_screen_x.c get_sprite_height.c set_sprite_height.c \
				get_sprite_top.c set_sprite_top.c get_sprite_bottom.c set_sprite_bottom.c \
				get_sprite_width.c set_sprite_width.c get_sprite_left.c set_sprite_left.c \
				get_sprite_right.c set_sprite_right.c get_sprite_texture_pos.c set_sprite_texture_pos.c \
				get_sprite_texture_pos_x.c set_sprite_texture_pos_x.c get_sprite_texture_pos_y.c set_sprite_texture_pos_y.c \
				get_absolute_sprite_pos_x.c get_absolute_sprite_pos_y.c set_absolute_sprite_pos_x.c set_absolute_sprite_pos_y.c \
				get_relative_sprite_pos_x.c get_relative_sprite_pos_y.c set_relative_sprite_pos_x.c set_relative_sprite_pos_y.c \
				get_transformed_pos_x.c get_transformed_pos_y.c set_transformed_pos_x.c set_transformed_pos_y.c \
				set_sprite_tab_pos.c \
				\
				create_player.c malloc_player.c destroy_player.c free_player.c \
				get_forward.c set_forward.c get_forward_x.c get_forward_y.c \
				get_pos.c set_pos.c get_pos_x.c get_pos_y.c get_right.c \
				set_right.c get_right_x.c get_right_y.c set_moves.c unset_moves.c \
				load_player.c update_player.c get_move_speed.c set_move_speed.c get_rotation_speed.c \
				set_rotation_speed.c get_pitch.c set_pitch.c get_pitch_value.c \
				get_forward_value.c get_right_value.c update_direction.c wall_collision.c \
				\
				create_map_params.c malloc_map_params.c destroy_map_params.c \
				free_map_params.c load_map_params.c get_map_file.c \
				load_we_texture.c load_sprite_texture.c load_no_texture.c load_so_texture.c load_ea_texture.c \
				get_resolution.c get_resolution_x.c get_resolution_y.c set_resolution.c \
				get_no_texture.c set_no_texture.c get_so_texture.c set_so_texture.c \
				get_we_texture.c set_we_texture.c get_ea_texture.c set_ea_texture.c \
				get_sprite_texture.c set_sprite_texture.c get_ceiling_color.c set_ceiling_color.c \
				get_floor_color.c set_floor_color.c get_map.c set_map.c get_map_adr.c \
				get_cardinal_point.c set_cardinal_point.c cube_file_parsing.c \
				resolution_parsing.c colors_parsing.c map_parsing.c is_cardinal_point.c \
				textures_parsing.c fill_params.c fill_map.c is_walled.c is_tile.c is_valid_map_entry.c \
				is_valid_line_len.c is_only_digits.c is_xpm_file.c resize_map.c \
				resize_resolution.c \
				\
				create_mlx_params.c malloc_mlx_params.c destroy_mlx_params.c free_mlx_params.c \
				get_mlx_ptr.c set_mlx_ptr.c get_win_ptr.c set_win_ptr.c \
				get_img_ptr.c set_img_ptr.c get_pixels.c set_pixels.c \
				get_bits_per_pixel.c set_bits_per_pixel.c get_size_line.c \
				set_size_line.c get_endian.c set_endian.c get_map_size.c \
				get_map_size_x.c get_map_size_y.c set_map_size.c load_mlx_params.c \
				is_double_param.c \
				\
				create_rcast_params.c malloc_rcast_params.c destroy_rcast_params.c \
				free_rcast_params.c get_dir.c get_dir_x.c get_dir_y.c \
				set_dir.c get_plane.c get_plane_x.c get_plane_y.c \
				set_plane.c get_ray_dir.c get_ray_dir_x.c get_ray_dir_y.c \
				set_ray_dir.c get_rcast_time.c get_old_time.c get_camera_x.c \
				set_rcast_time.c set_old_time.c set_camera_x.c \
				get_map_pos.c get_map_pos_x.c get_map_pos_y.c set_map_pos.c \
				set_map_pos_x.c set_map_pos_y.c \
				get_perpendicular_wall_dist.c set_perpendicular_wall_dist.c \
				get_perp_wall_dist_tab.c set_perp_wall_dist_tab.c get_perp_wall_dist_tab_index.c \
				get_step.c get_step_x.c get_step_y.c set_step.c set_step_x.c set_step_y.c \
				get_side_dist.c get_side_dist_x.c get_side_dist_y.c set_side_dist.c \
				set_side_dist_x.c set_side_dist_y.c \
				get_delta_dist.c get_delta_dist_x.c get_delta_dist_y.c set_delta_dist.c \
				get_hit.c set_hit.c get_side.c set_side.c \
				get_dir_value.c get_plane_value.c load_rcast_params.c \
				get_side_tab.c get_side_tab_index.c set_side_tab.c \
				\
				create_render_params.c destroy_render_params.c malloc_render_params.c free_render_params.c \
				get_texture_params.c set_texture_params.c get_sprite_params.c set_sprite_params.c \
				load_texture_params.c load_sprite_params.c load_sprite_tab.c get_sprite_nbr_value.c \
				\
				create_engine.c malloc_engine.c destroy_engine.c free_engine.c \
				load_game.c close_game.c get_map_params.c \
				get_mlx_params.c get_player.c get_rcast_params.c  get_render_params.c get_moves.c \
				get_bmp_save.c set_bmp_save.c \
				\
				run_game.c update_game.c get_pixel_index.c put_pixel.c draw_rectangle.c \
				draw_circle.c get_minimap_tile_size.c render_minimap.c \
				render_minimap_wall.c render_minimap_tile.c map_pos_to_pixel_pos.c render_minimap_player.c \
				rendering.c calculate_texture_pos_x.c calculate_wall_hitpoint_x.c \
				no_texture_color.c so_texture_color.c we_texture_color.c ea_texture_color.c \
				sprite_texture_color.c calculate_texture_step.c set_texture_params_values.c \
				set_sprite_params_values.c render_sprite_pixel.c \
				calculate_sprite_texture_pos_x.c calculate_sprite_texture_pos_y.c \
				is_drawable_sprite_pixel.c render_sprite.c \
				\
				key_press.c key_release.c is_movement_key.c is_rotation_key.c \
				\
				distance_calculation.c \
				\
				raycasting.c update_ray_dir_value.c update_delta_dist_value.c update_step_and_side_dist_values.c \
				hitpoint_detection.c side_detection.c is_map_border.c update_perpendicular_wall_dist.c \
				\
				error_exit.c error_exit_vector.c \
				\
				create_bmp.c pre_render_bmp.c set_int_in_bmp_buffer.c bmp_rendering.c \
				\
				create_bitmap.c destroy_bitmap.c malloc_bitmap.c free_bitmap.c \

OBJS		=	$(addprefix $(OBJS_DIR)/, $(SRCS:%.c=%.o))

FRAMEWORK	=	OpenGL AppKit

#Compilation flag
CFLAGS		=	-Wall -Wextra -Werror

IFLAGS		=	$(foreach dir, $(INC_DIR), -I$(dir)) -I libs/mlx

LFLAGS		=	$(foreach dir, $(LIB_DIR), -L $(dir)) \
				$(foreach lib, $(LIB), -l $(lib)) \
				$(foreach frame, $(FRAMEWORK), -framework  $(frame))

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
				@$(CC) $(LFLAGS) -o $(NAME) $(OBJS) libs/mlx/libmlx.a libs/libft/libft.a $(CFLAGS)
				@echo "DONE\n-----"

norme:
				norminette $(SRCS_DIR)

re:						fclean all

exec:					all
				@./$(NAME) ressources/map.cub

clean:
				@echo "Deleting Objects Directory $(OBJS_DIR) ... \c"
				@rm -rf $(OBJS_DIR)
				@echo "DONE\n-----"

fclean:					clean
				@echo "Deleting Binary File $(NAME) ... \c"
				@rm -f $(NAME) $(BONUS_NAME)
				@echo "DONE\n-----"

.PHONY: 				all clean flcean re show exec norme bonus
