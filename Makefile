# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 11:27:22 by grocamor          #+#    #+#              #
#    Updated: 2022/08/04 13:08:14 by grocamor         ###   ########.fr        #
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
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

COMPILE = gcc

FLGAS = -Wall -Wextra -Werror 

INCLUDES := -I . \	

DEL = rm -rf

OBJ = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJ) libft.h
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)	
		@echo "compOk"

clean:
		@$(DEL) $(OBJ)

fclean: clean
		@$(DEL) $(NAME)

norm: 
	@norminette $(SRCS)

re: fclean all
