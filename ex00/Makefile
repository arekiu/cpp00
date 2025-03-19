# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 12:29:38 by aschmidt          #+#    #+#              #
#    Updated: 2024/11/19 12:30:41 by aschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
SRC	= megaphone.cpp
OBJ     = $(SRC:.cpp=.o)
CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM      = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
