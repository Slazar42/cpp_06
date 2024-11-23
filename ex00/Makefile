# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slazar <slazar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 02:41:13 by slazar            #+#    #+#              #
#    Updated: 2024/11/01 16:11:29 by slazar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Convert
SRC = main.cpp ScalarConverter.cpp
RM = rm -f
CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)
HEADER = ScalarConverter.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
