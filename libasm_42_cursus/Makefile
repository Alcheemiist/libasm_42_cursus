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
	  ft_strcmp.s\
	  ft_read.s\
	  ft_strdup.s\
	  ft_write.s\

OBG = $(SRC:.s=.o)

all : $(NAME)

$(NAME) : 
	@nasm $(FLAGS) ft_strlen.s
	@nasm $(FLAGS) ft_strcpy.s
	@nasm $(FLAGS) ft_strcmp.s
	@nasm $(FLAGS) ft_strdup.s
	@nasm $(FLAGS) ft_read.s
	@nasm $(FLAGS) ft_write.s
	@ar -rc $(NAME) $(OBG)
	@ranlib $(NAME)

clean : 
	rm -rf $(OBG)

fclean : 
	rm -rf $(NAME)
	rm -rf a.out

re : clean all