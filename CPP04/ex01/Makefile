# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 11:17:58 by jmarks            #+#    #+#              #
#    Updated: 2024/07/15 10:50:29 by jmarks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = animals

SRCS = Animal.cpp \
	   Cat.cpp \
		Dog.cpp \
		Brain.cpp \
		main.cpp

OBJS=$(SRCS:.cpp=.o)

CC=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all	clean fclean re

