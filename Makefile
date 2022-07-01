NAME = libft.a

COMPILE = gcc

FLGAS = -Wall -Wextra -Werror 

SRCS = ft_atoi.c/
		ft_bzero.c/
		ft_calloc.c/
		ft_isalnum.c/
		ft_isalpha.c/
		ft_isascii.c/
		ft_isdigit.c/
		ft_isprint.c/
		ft_itoa.c/
		ft_memchr.c/
		ft_memcmp.c/
		ft_memcpy.c/
		ft_memmove.c/
		ft_memset.c/
		ft_putchar.c/
		ft_putend_fd.c/
		ft_putnbr_fd.c/
		ft_putstr_fd.c/
		ft_split.c/
		ft_strchr.c/
		ft_strdup.c/
		ft_striteri.c/
		ft_strjoin.c/
		ft_strlcat.c/
		ft_strlcpy.c/
		ft_strlen.c/
		ft_strmapi.c/
		ft_strncmp.c/
		ft_strnstr.c/
		ft_strrchr.c/
		ft_strtrim.c/
		ft_substr.c/
		ft_tolower.c/
		ft_toupper.c/

INCLUDES := -I . \	

DEL = rm -rf

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(OBJ): %.0:%.c
		@echo -n $(NAME):' $@: '
		@$(CC) -c $(FLAGS) $(INCLUDES) $< -o $@
		@echo "$(SUCCESS)"


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
