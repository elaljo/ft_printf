NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_strlen.c\
	  ft_putstr.c\
	  ft_putnbr.c\
	  ft_putnbr_un.c\
	  ft_putchar.c\
	  ft_hexa_lower.c\
	  ft_hexa_upper.c\
	  ft_ptr.c\
	  ft_strlen.c\
	  ft_printf.c\
	  formats.c

OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
