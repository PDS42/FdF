# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prichard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/02 13:49:24 by prichard          #+#    #+#              #
#    Updated: 2016/03/02 14:26:15 by prichard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC_PATH = ./src/
SRC_NAME =	parsing.c

OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)

INC_PATH = -I ./include/ -I ./libft/

LIB_PATH = -L ./libft/
LIB_NAME = -lft

CC = gcc
FLAGS = -Wall -Werror -Wextra 
MINILIBIX = -L/usr/local/lib/ -I/usr/local/include -lmlx -framework OpenGL -framework AppKit

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(MINILIBIX) $(LIB_PATH) $(LIB_NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(FLAGS) $(INC_PATH) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	rm -fv $(NAME)

re:	fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all clean fclean re norme
