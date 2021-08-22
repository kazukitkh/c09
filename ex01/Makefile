CC = gcc
INCDIR = ./includes
CFLAGS = -Wall -Wextra -Werror -I $(INCDIR)
COMPILE_C = $(CC) $(CFLAGS)
TARGET = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c
SRCS += srcs/ft_swap.c
OBJS = $(SRCS:%.c=%.o)
all : ${TARGET}

.SUFFIXES :
.SUFFIXES : .o .c

${TARGET} : ${OBJS}
	ar -rcs ${TARGET} ${OBJS}

.c.o : 
	${COMPILE_C} -c $< -o $@

clean :
	rm -f ${OBJS}
fclean : clean
	rm -f ${TARGET}
re : fclean all

.PHONY : all clean fclean re
