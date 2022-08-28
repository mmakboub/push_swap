# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 02:37:48 by mmakboub          #+#    #+#              #
#    Updated: 2022/08/28 16:34:04 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
FONCTIONS = ./MANDATORY/addto_stack.c\
			./MANDATORY/helpfulfonctions.c\
			./MANDATORY/helpfullfonctions2.c\
			./MANDATORY/helpfullfonctions3.c\
			./MANDATORY/instructions.c\
			./MANDATORY/instructions2.c\
			./MANDATORY/parsing.c\
			./MANDATORY/pushswap.c\
			./MANDATORY/sorting.c\
			./MANDATORY/algo.c\
			./MANDATORY/free_stacks.c\
			./MANDATORY/ft_printf/fct_auxil_hex.c\
			./MANDATORY/ft_printf/ft_fctauxiliare.c\
			./MANDATORY/ft_printf/ft_printf.c



BONUS_FUNCTION = ./bonus/parsingbns.c \
			./bonus/instructionsbns2.c\
			./bonus/instructionsbns.c\
			./bonus/helpfullfonctions2.c\
			./bonus/helpfullfonctions3.c\
			./bonus/get_next_line/get_next_line.c\
			./bonus/get_next_line/get_next_line_utils.c\
			./bonus/helpfulfonctions.c\
			./bonus/checker.c\
			./bonus/my_free.c

			
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f
INCLUDE = ./MANDATORY/pushswap.h
INCLUDEB = ./bonus/pushswap_bonus.h

OBJS = $(FONCTIONS:.c=.o)
B_OBJS = $(BONUS_FUNCTION:.c=.o)


all : $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

bonus:$(B_OBJS)
	$(CC) $(CFLAGS) ${B_OBJS} -o $(NAME_BONUS)
	
clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean : clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all