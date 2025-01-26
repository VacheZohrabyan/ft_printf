NAME = libftprintf.a

CC = cc

CFLAGS = -Werror -Wextra -Wall

COBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = 	character.c\
		#s_printf.c\
		p_printf.c\
		d_printf.c\
		i_ptintf.c\
		x_printf.c\
		u_printf.c\
		upper_printf.c\

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(COBJS) $(LIBFT)
	ar rcs $(NAME) $(COBJS) $(LIBFT)

clean: 
	rm -rf $(COBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME) $(LIBFT)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re