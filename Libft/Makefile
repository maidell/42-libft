NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_tolower.c ft_toupper.c \
	ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
	ft_striteri.c ft_itoa.c

OBJECTS = ${SOURCES:.c=.o}

RM = @rm -f

CC = @clang

CFLAGS = -Wall -Wextra -Werror

ARCHIVE = @ar -rcs

# Default all command to compile
all: ${NAME}

# Compile files following above rules 	${CC} -o ${NAME} ${OBJECTS}
$(NAME): ${OBJECTS} 
	make -C ./printf
	mv ./printf/libftprintf.a ./$(NAME)
	${ARCHIVE} ${NAME} ${OBJECTS}
	
# Clean generated .o files
clean:
	${RM} ${OBJECTS} 
	make clean -C ./printf

# Force clean all files generated on all
fclean: clean
	${RM} ${NAME} 

# Regenarate compilation
re: fclean $(NAME)

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY: all clean fclean re
