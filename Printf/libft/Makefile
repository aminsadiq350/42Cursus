NAME		= 	libft.a
SRCS		= 	ft_putchar_fd.c ft_putstr_fd.c  ft_strlen.c
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
				${RM} *.h.gch

re :        	fclean all

.PHONY:		all clean fclean re