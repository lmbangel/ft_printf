# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/01 02:06:52 by lmbangel          #+#    #+#              #
#    Updated: 2018/08/01 02:07:22 by lmbangel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB =   ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c          \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c           \
	ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c        \
	ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c        \
	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c         \
	ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c      \
	ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c        \
	ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c         \
	ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c        \
	ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c   \
	ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_putendl_tab.c ft_swap.c       \
	ft_sqrt.c ft_power.c ft_factorial.c ft_putstr_tab.c get_next_line.c   \
	ft_ahtoi.c ft_free_tab.c ft_abs.c ft_put_error.c ft_init_str.c        \
	ft_lltoab.c ft_itoah.c ft_itoao.c ft_sizebyte.c ft_putwchar.c          \
	ft_putwstr.c ft_lltoa.c ft_lltoao.c ft_lltoah.c ft_putnstr.c          \
	ft_putnwstr.c ft_wstrlen.c ft_sizewchar.c ft_ulltoa.c ft_wnstrlen.c   \
	ft_base.c

PATH_LIB = libft/

SRC = ft_printf.c ft_format.c ft_type.c write_nbr.c ft_is.c ft_wp.c      \
	  ft_sc.c fill_zero.c add_width.c no_print.c change_color.c

PATH_SRC = sources/

O_SRC = $(SRC:.c=.o)

O_LIB = $(LIB:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C $(PATH_SRC)
	make -C $(PATH_LIB)
	ar -rc $(NAME) $(addprefix $(PATH_SRC), $(O_SRC)) $(addprefix $(PATH_LIB), $(O_LIB))

clean:
	make clean -C $(PATH_SRC)
	make clean -C $(PATH_LIB)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
