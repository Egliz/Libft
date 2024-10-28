# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 23:00:47 by emorillo          #+#    #+#              #
#    Updated: 2024/10/28 21:30:22 by emorillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -I includes

CLEAR = rm -rf

LIB = ar rcs

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_substr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_memmove.c \
	ft_strlcat.c ft_itoa.c ft_split.c ft_toupper.c ft_strjoin.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strtrim.c ft_strmapi.c ft_striteri.c\

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(CLEAR) $(OBJS)

fclean: clean
	$(CLEAR) $(NAME)

re: fclean all 

.PHONY: all clean fclean re
