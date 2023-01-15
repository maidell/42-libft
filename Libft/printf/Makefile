NAME = libftprintf.a

INCLUDES = ./includes

SOURCES = ./sources/ft_printf.c \
			./utils/ft_putchar.c \
			./utils/ft_putstr.c \
			./utils/ft_putnbr.c \
			./utils/ft_puthex.c

RM = @rm -f

ARCHIVE = @ar -rc

CC = @clang

CFLAGS = -Wall -Wextra -Werror

OBJECTS = ${SOURCES:.c=.o} 

# Mandatory
all: ${NAME}

# Mandatory
$(NAME): ${OBJECTS} 
	${ARCHIVE} ${NAME} ${OBJECTS}
# ar -rc libftprintf.a 
	
%.o:%.c
	${CC} $(CFLAGS) -I${INCLUDES} -c $< -o ${<:.c=.o}

# Mandatory
clean:
	${RM}	${OBJECTS}
	
# Mandatory
fclean: clean
	${RM} ${NAME}

# Mandatory
# Regenarate compilation
re: fclean all

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY: all clean fclean re