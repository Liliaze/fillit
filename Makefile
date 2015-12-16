# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mperronc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 12:07:00 by mperronc          #+#    #+#              #
#    Updated: 2015/12/16 14:43:12 by mperronc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Thanks to fdaudre- for his tutorial #

SRC_PATH = ./srcs/

SRC_NAME = pattern_to_left_corner.c \
		   get_offset.c \
		   is_pattern_valid.c \
		   is_pattern_valid_dotsharp.c \
		   is_pattern_valid_i.c \
		   is_pattern_valid_l.c \
		   is_pattern_valid_j.c \
		   is_pattern_valid_s.c \
		   is_pattern_valid_z.c \
		   is_pattern_valid_t.c \
		   is_pattern_valid_o.c \
		   can_place.c \
		   put_tetri.c \
		   solve_me.c \
		   ft_read_file.c \
		   new_tetrimino.c \
		   push_tetrimino_back.c \
		   turn_into_alphachar.c \
		   extend_board.c \
		   ft_strnew_with_dot.c \
		   ft_strnout.c \
		   get_board_size.c \
		   get_next_line.c \
		   list_len.c \
		   fillit.c \

OBJ_PATH = ./obj/

INC_PATH = ./incl/

NAME = fillit

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L ./libft -lft

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	rm -fv $(NAME)

re:	fclean all
