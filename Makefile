NAME = a.out
LIBFT_PATH = ../libft

CC = cc
CFLAGS = -Wall -Wextra -Werror
DEPS = libft.a 

all: $(NAME)

$(NAME): $(DEPS)
	$(CC) $(CFLAGS) -o $(NAME) $(wildcard *.c) -I $(LIBFT_PATH) $(LIBFT_PATH)/libft.a -lbsd

$(DEPS):
	cd $(LIBFT_PATH) && make re && make clean

clean:
	rm -f $(NAME)

re: clean all
