# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 12:37:24 by rmeriau           #+#    #+#              #
#    Updated: 2023/11/28 17:02:36 by rmeriau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = Harl

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

INCLUDE = -I.

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) ${INCLUDE} $(OBJS) -o $(NAME)

Harl.o: Harl.hpp

%.o: %.cpp
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re