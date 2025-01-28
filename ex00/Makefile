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
CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
