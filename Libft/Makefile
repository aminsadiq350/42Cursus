NAME		= 	libft.a
SRCS		= 	$(wildcard ft_*.c)
OBJS		=	${SRCS:.c=.o}
RM			= 	rm -rf
CFLAGS		= 	-Wall -Wextra -Werror

${NAME}:		${OBJS}
				ar -rcs ${NAME} ${OBJS}

all:			${NAME}

clean:		
				${RM} ${OBJS}

fclean: 		clean
				${RM} ${NAME}

re :        	fclean all

.PHONY:		all clean fclean re