# Makefile for my_ngram

TARGET = my_ngram
SRC = my_ngram.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(TARGET)

$(TARGET): $(OBJ)
    gcc $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
    gcc $(CFLAGS) -c $(SRC)

clean:
    rm -f *.o

fclean: clean
    rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
