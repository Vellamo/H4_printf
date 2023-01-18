# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lharvey <lharvey@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/01 11:41:06 by lharvey           #+#    #+#              #
#    Updated: 2022/11/24 12:07:10 by lharvey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES:
.SUFFIXES: .c .h .o .a

SHELL := /bin/sh

NAME := libftprintf.a
HEDR := libftprintf.h

DIR_SRC := sources/
DIR_OBJ := obj/
VPATH = $(DIR_SRC)

SRC = libftprintf.c
OBJ = $(SRC:%.c=$(DIR_OBJ)%.o)

CC := cc
CFLAGS := -Wall -Wextra -Werror 
COMPILE = $(CC) $(CFLAGS) 

ARCHIVE := ar
AR_FLAGS := rucs
ADD_LIB :=  $(ARCHIVE) $(AR_FLAGS) $(NAME)

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJ) 
	$(COMPILE) $(OBJ) -o $@
	$(ADD_LIB) $(OBJ)

$(DIR_OBJ):
	mkdir $@

$(DIR_OBJ)%.o:%.c | $(DIR_OBJ)
	$(COMPILE) -c $< -o $@

clean:
	rm -rf $(DIR_OBJ) 

fclean: clean
	rm -f $(NAME) 

re: fclean all
