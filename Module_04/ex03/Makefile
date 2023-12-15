# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 12:37:24 by rmeriau           #+#    #+#              #
#    Updated: 2023/12/12 17:18:49 by rmeriau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
RM = rm -rf
NAME = Polymorphisme

SRCS = main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)
INCLUDE = -I.

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) ${INCLUDE} $(OBJS) -o $(NAME)

-include $(DEPS)

%.o: %.cpp
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re