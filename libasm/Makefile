# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 16:16:59 by eelaazmi          #+#    #+#              #
#    Updated: 2021/01/14 16:17:04 by eelaazmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

FLAGS = -fmacho64 

SRC = ft_strlen.s\
	  ft_strcpy.s\

OBG = $(SRC:.s=.o)

all : $(NAME)

$(NAME) : 
	@nasm $(FLAGS) ft_strlen.s
	@nasm $(FLAGS) ft_strcpy.s
	@ar -rc $(NAME) ft_strlen.o
	@ranlib $(NAME)
	@gcc main.c $(NAME)

clean : 
	rm -rf $(OBG)

fclean : 
	rm -rf $(NAME)

re : clean all