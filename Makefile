# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 19:59:40 by rleslie-          #+#    #+#              #
#    Updated: 2022/10/05 20:15:02 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprint.a
SRCS = ft_printf.c ft_printf_utils.c
OBJ := ${SRCS:.c=.o}

all: $(NAME)

$(NAME):
	clang -Wall -Wextra -Werror -c $(SRCS)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	