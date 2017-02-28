NAME = libftprintf.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -Ilibft -Iinc/
SRCDIR	=	funct
OBJDIR	=	obj
SRC		=	src
_SRC	=	check_color.c \
			ft_add_minus.c \
			ft_Blue.c \
			ft_convertor_max.c \
			ft_convertor_mini.c \
			ft_Cyan.c \
			ft_fill_1.c \
			ft_fill_2.c \
			ft_fill.c \
			ft_get_flags_data.c \
			ft_get_i.c \
			ft_Green.c \
			ft_isnbr.c \
			ft_Magenta.c \
			ft_move_addres.c \
			ft_printf.c \
			ft_put_before.c \
			ft_putchr.c \
			ft_put_first.c \
			ft_put_last.c \
			ft_put_middle.c \
			ft_putnbr_long.c \
			ft_putnbr_uns.c \
			ft_put_space.c \
			ft_Red.c \
			ft_return_16.c \
			ft_return_adress.c \
			ft_return_bin.c \
			ft_return_c.c \
			ft_return_HEX.c \
			ft_return_hexx.c \
			ft_return_int.c \
			ft_return_oct.c \
			ft_return_s.c \
			ft_str_to_n.c \
			ft_White.c \
			ft_Yellow.c \
			num_to_base.c

SRC		=	$(addprefix $(SRCDIR)/, $(_SRC))
_OBJ	=	$(_SRC:.c=.o)
OBJ		=	$(addprefix $(OBJDIR)/, $(_OBJ))
LIBFT	=	./libft/libft.a
RM		=	rm -f

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@gcc $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	@make -C ./libft
	@ar -rcs $(LIBFT) $?
	@mv $(LIBFT) $(NAME)
clean:
	@$(RM) $(OBJ)
	@make clean -C ./libft

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ./libft

re: fclean all