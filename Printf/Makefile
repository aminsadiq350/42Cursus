NAME		= 	libftprintf.a
LIBFTNAME	= 	libft/libft.a
SRCS		= 	$(wildcard ft_*.c) $(wildcard utils/ft_*.c) 
OBJS		=	${SRCS:.c=.o}
RM			= 	rm -rf
CFLAGS		= 	-Wall -Wextra -Werror

${NAME}:		${LIBFTNAME} ${OBJS}
				ar -rcs ${NAME} ${OBJS}

${LIBFTNAME}:	
				$(MAKE) -C libft
				cp libft/libft.a ${NAME}

main:			${NAME}
				cc ${CFLAGS} ${NAME} main.c -o main.out && ./main.out

all:			${NAME}

clean:		
				${RM} ${OBJS}
				$(MAKE) -C libft/ clean

fclean: 		clean
				${RM} ${NAME} ${LIBFTNAME}
				$(MAKE) -C libft/ fclean

re :        	fclean all

.PHONY:		all clean fclean re