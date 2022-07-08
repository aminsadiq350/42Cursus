NAME		= 	libftprintf.a
LIBFTNAME	= 	libft/libft.a
SRCS		= 	ft_printf.c utils/ft_print_char.c utils/ft_print_nbr.c utils/ft_print_nbr_base.c \
				utils/ft_print_ptr_hex.c utils/ft_print_str.c 
OBJS		=	${SRCS:.c=.o}
RM			= 	rm -rf
CFLAGS		= 	-Wall -Wextra -Werror

${NAME}:		${OBJS}
				$(MAKE) -C libft
				cp libft/libft.a ${NAME}
				ar -rcs ${NAME} ${OBJS}

all:			${NAME}

clean:		
				${RM} ${OBJS}
				$(MAKE) -C libft/ clean
				${RM} *.h.gch utils/*.h.gch

fclean: 		clean
				${RM} ${NAME} ${LIBFTNAME}
				$(MAKE) -C libft/ fclean

re :        	fclean all

.PHONY:		all clean fclean re