# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mperronc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 12:07:00 by mperronc          #+#    #+#              #
#    Updated: 2015/12/11 16:12:03 by mperronc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Thanks to fdaudre- for his tutorial #

SRC_PATH = ./srcs/

SRC_NAME = ft_stricpy.c		\
		   print_lns.c		\
		   print_O.c		\
		   print_I.c		\
		   print_L.c		\
		   print_J.c		\
		   print_S.c		\
		   print_Z.c		\
		   print_T.c		\
		   generator.c

OBJ_PATH = ./obj/

INC_PATH = ./incl/

NAME = generator

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	rm -fv $(NAME)

re:	fclean all
