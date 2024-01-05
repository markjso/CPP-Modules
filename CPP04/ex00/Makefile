# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 11:17:58 by jmarks            #+#    #+#              #
#    Updated: 2023/03/27 11:18:57 by jmarks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = animals

SRCS = Animal.cpp \
	   Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp

OBJS=$(SRCS:.cpp=.o)

CC=c++

CFLAGS=-Wall -Wextra -Werror -I -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CLFAGS) -o $(NAME) $(OBJS) 
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all	clean fclean re

