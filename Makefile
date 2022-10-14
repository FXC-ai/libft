HEADIR = includes

SRCS 	= srcs/ft_bzero.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strncmp.c srcs/ft_atoi.c srcs/ft_memset.c srcs/ft_split.c srcs/ft_strdup.c srcs/ft_strjoin.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I${HEADIR}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}
	
all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re