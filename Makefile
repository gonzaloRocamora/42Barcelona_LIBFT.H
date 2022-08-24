# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 11:27:22 by grocamor          #+#    #+#              #
#    Updated: 2022/08/24 11:30:25 by grocamor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
 		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

COMPILE = gcc

FLAGS = -Wall -Wextra -Werror 

INCLUDES := -I . \	

DEL = rm -rf

OBJ = $(SRCS:%.c=%.o)

OBJ_DIR = obj

%.o: %.c libft.h
	@echo $@ es compilado!
	@gcc $(FLAGS) -c $< -o $@

#$^ todos que estan despues de los dos puntos
#$< el primer elemento dela primera lista despues de los dos puntos (se es solo un objecto, coge este objecto)
#$@ antes de los dos puntos

all: $(NAME)

$(NAME): $(OBJ)
		@ar rcs $(NAME) $(OBJ)
		@echo "compOk"

clean:
		@$(DEL) $(OBJ)

fclean: clean
		@$(DEL) $(NAME)

norm: 
	@norminette $(SRCS)

re: fclean all

git: 
	git add .
	git commit -m "$m"
	git push 

.PHONY: all fclean clean re