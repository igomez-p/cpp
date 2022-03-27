# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/17 20:15:03 by igomez-p          #+#    #+#              #
#    Updated: 2022/03/27 07:54:47 by igomez-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
		
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		clang++ -Wall -Werror -Wextra -std=gnu++98 $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re : fclean all
