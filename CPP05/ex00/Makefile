# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 13:26:07 by jmarks            #+#    #+#              #
#    Updated: 2023/12/27 17:13:28 by jmarks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = bureaucrat

SRCS = Bureaucrat.cpp \
		main.cpp

OBJS=$(SRCS:.cpp=.o)

CC=g++

CFLAGS=-Wall -Wextra -Werror -I -std=c++98

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

