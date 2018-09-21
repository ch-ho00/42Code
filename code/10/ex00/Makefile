NAME=libft.a
SRCS= ft_putchar.c  ft_putstr.c   ft_strlen.c  ft_swap.c  ft_strcmp.c
OBJECTS=ft_putchar.o  ft_strcmp.o ft_strlen.o ft_swap.o ft_putstr.o
HEADERS_FOLDER=includes

all: make_lib

make_lib:
	gcc -I$(HEADERS_FOLDER) -c $(SRCS)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
