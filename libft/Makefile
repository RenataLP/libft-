# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkristle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 19:21:46 by bkristle          #+#    #+#              #
#    Updated: 2019/04/09 19:24:31 by bkristle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

CFLAGS = -c -Wall -Werror -Wextra

NAME = libft.a

SOURCES = *.c

all: $(NAME)

$(NAME):
		$(C) $(CFLAGS) $(SOURCES) -I libft.h \
		&& ar rc $(NAME) *.o \
		&& ranlib $(NAME)

clean:
		rm -rf *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

