NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o:
			cc ${CFLAGS} -c $< -o ${<:.c=.o} -I.

$(NAME):	${OBJS} ${H_SRC}
			make -C ./printf
			mv ./printf/libftprintf.a ./$(NAME)

# Default all command to compile
all: 		${NAME}

# Clean generated .o or .a files
clean:
			${RM} ${OBJS}
			make clean -C ./printf

# Force clean all files generated on all
fclean:		clean
			${RM} ${NAME}

# Regenarate compilation
re:			fclean all

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY:		all clean fclean re