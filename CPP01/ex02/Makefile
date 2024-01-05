# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 15:40:47 by jmarks            #+#    #+#              #
#    Updated: 2023/01/31 15:40:52 by jmarks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

SRCS = main.cpp
	
OBJS=$(SRCS:.cpp=.o)

CC=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

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
