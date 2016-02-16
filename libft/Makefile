# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prichard <prichard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 15:14:48 by prichard          #+#    #+#              #
#    Updated: 2016/02/16 14:07:03 by prichard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

WFLAGS = -Wall -Werror -Wextra

HEADERS = libft.h

RM = rm -f $(OBJ)

SRC = ft_bzero.c \
ft_memalloc.c \
ft_memccpy.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memdel.c \
ft_memmove.c \
ft_memset.c \
ft_memchr.c \
ft_putendl.c \
ft_putendl_fd.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putstr.c \
ft_putstr_fd.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_strdup.c \
ft_strequ.c \
ft_strnequ.c \
ft_strsub.c \
ft_strjoin.c \
ft_strsplit.c \
ft_strdel.c \
ft_strcmp.c \
ft_strncmp.c \
ft_strcat.c \
ft_strncat.c \
ft_strlcat.c \
ft_strmapi.c \
ft_strnew.c \
ft_striter.c \
ft_striteri.c \
ft_strchr.c \
ft_strrchr.c \
ft_strstr.c \
ft_strnstr.c \
ft_strtrim.c \
ft_strlen.c \
ft_strclr.c \
ft_strmap.c \
ft_toupper.c \
ft_tolower.c \
ft_strcpy.c \
ft_strncpy.c \
ft_itoa.c \
ft_atoi.c \
ft_lstnew.c \
ft_lstdelone.c \
ft_lstadd.c \
ft_lstiter.c \
ft_lstdel.c \
ft_lstmap.c \
ft_countword.c \
ft_islower.c \
ft_isupper.c \
get_next_line.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $^
	ranlib $(NAME)

$(OBJ):
	gcc $(WFLAGS) -c $(SRC)

clean:
	$(RM)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
