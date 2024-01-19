CC		= gcc
CFLAGS	= -Wall -Werror -Wextra #-fsanitize=thread -g
RM		= rm -f
NAME	= philo

AR		= ar rc

SRCS_A	= 
SRCS	= $(addprefix src/, $(SRCS_A))

OBJS	= ${SRCS:.c=.o}

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	${RM} ${OBJS} ${OBJS_B}
fclean:	clean
	${RM} ${NAME}
re: fclean all
.PHONY:	all clean fclean re bonus
