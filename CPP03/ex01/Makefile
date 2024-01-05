# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 15:39:22 by jmarks            #+#    #+#              #
#    Updated: 2023/03/20 15:39:25 by jmarks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

SRCS = ClapTrap.cpp \
		ScavTrap.cpp \
		main.cpp

OBJS=$(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -I -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CLFAGS) -o $(NAME) $(OBJS) 
	
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all	clean fclean re

