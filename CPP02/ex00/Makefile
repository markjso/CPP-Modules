# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 16:31:15 by jmarks            #+#    #+#              #
#    Updated: 2023/03/07 16:31:28 by jmarks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

SRCS = Fixed.cpp \
		main.cpp

OBJS=$(SRCS:.cpp=.o)

CC=g++

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
