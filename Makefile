NAME 		= 		libftprintf.a

CC 			=		cc

CFLAGS 		=		-Wall -Wextra -Werror

HEADER 		=		ft_printf.h	

COBJS 		= 		$(SRCS:.c=.o)

SRCS 		=		ft_point.c\
					ft_printf.c\
					ft_printf_util.c\
					ft_printf_util1.c\

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(COBJS)
	ar rcs $(NAME) $(COBJS)

clean:
	rm -rf $(COBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean all clean re
