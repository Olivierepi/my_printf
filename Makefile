##
## EPITECH PROJECT, 2021
## my_printf
## File description:
## Makefile
##

CC = gcc
CFLAGS = -W -Wextra -Werror

LIB = -L./ -I./includes -lmy -lcriterion

LIB_SRC	= src/my_printf.c \
		src/my_put_nbr.c \
		src/my_put_nothing.c \
		src/my_put_octal.c \
		src/my_put_unsigned.c \
		src/my_putchar.c \
		src/my_putstr.c \

LIB_OBJ	= *.o

TARGET_LIB = libmy.a

libmy.a:
	$(CC) $(LIB_SRC) -c
	ar rsc $(TARGET_LIB) $(LIB_OBJ)
	rm -rf $(LIB_OBJ)

all: libmy.a

clean:
	rm -rf $(TARGET_LIB)
	rm -rf *.out

fclean: clean

re: fclean all
