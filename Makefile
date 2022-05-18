SCRS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o \
ft_swap.o

HEADER = ./includes/

NAME = libft.a

GCC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

$(NAME):
	$(GCC) $(CFLAGS) -c $(SCRS) -I $(HEADER)
	$(AR) $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re