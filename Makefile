# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwode <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/20 23:39:46 by zwode             #+#    #+#              #
#    Updated: 2019/04/21 02:25:57 by zwode            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard *.c)

OBJECT = $(wildcard *.o)

HEADER = ./libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I$(HEADER)
	ar rc $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
