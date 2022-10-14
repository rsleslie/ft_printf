# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 19:59:40 by rleslie-          #+#    #+#              #
#    Updated: 2022/10/14 15:44:39 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_format.c ft_hex.c ft_ptr.c ft_putnbr_u.c ft_putnbr.c ft_size.c ft_strlen.c ft_putstr.c
OBJ := ${SRCS:.c=.o}

all: $(NAME)

$(NAME):
	cc -Wall -Werror -Wextra -c $(SRCS)
	ar -rc $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all
	