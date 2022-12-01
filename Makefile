NAME = libftprintf.a

SRC = ft_putchar.c ft_putnbr_hex.c ft_putstr.c ft_putnbr.c ft_strlen.c ft_printf.c \

OBJECTS = $(SRC:.c=.o)

CC = gcc $(CFLAGS)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) $(OBJECTS)
		ar rc $(NAME) $(OBJECTS)
		
clean:
		rm -f $(OBJECTS) $(OBJECTSBONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all