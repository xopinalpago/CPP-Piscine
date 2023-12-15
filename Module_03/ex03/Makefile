# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 12:37:24 by rmeriau           #+#    #+#              #
#    Updated: 2023/12/08 14:45:19 by rmeriau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = DiamondTrap

SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)

INCLUDE = -I.

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) ${INCLUDE} $(OBJS) -o $(NAME)

ClapTrap.o: ClapTrap.hpp
ScavTrap.o: ScavTrap.hpp
FragTrap.o: FragTrap.hpp
DiamondTrap.o: DiamondTrap.hpp

%.o: %.cpp
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re