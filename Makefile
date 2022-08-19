# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 02:37:48 by mmakboub          #+#    #+#              #
#    Updated: 2022/08/19 19:18:51 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap
FONCTIONS = ./MANDATORY/addto_stack.c\
			./MANDATORY/algo.c\
			./MANDATORY/helpfulfonctions.c\
			./MANDATORY/helpfullfonctions2.c\
			./MANDATORY/helpfullfonctions3.c\
			./MANDATORY/instructions.c\
			./MANDATORY/parsing.c\
			./MANDATORY/pushswap.c\
			./MANDATORY/sorting.c

			
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f
INCLUDE = ./MANDATORY/pushswap.h

OBJS = $(FONCTIONS:.c=.o)


all : $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean : clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all