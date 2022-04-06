NAME	=	aout

SRCS	=	main.cpp ClapTrap.cpp

INCL	=	ClapTrap.h

OBJS	=	$(SRCS:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror

CC		=	clang++

STD		=	-std=c++98

all:		$(NAME)

%.o: %.cpp	$(INCL)
			@$(CC) $(STD) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			@$(CC) $(STD) $(OBJS) $(CFLAGS) -o $(NAME)
			@echo "Make done"

clean:
			@${RM} ${OBJS}
			@echo "Make clean done"

fclean:
			@${RM} ${OBJS}
			@${RM} ${NAME}
			@echo "Make fclean done"

re:			fclean all
			@echo "Make re done"

.PHONY:		all clean fclean re
