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
CFLAGS := -Wall -Wextra -Werror -c
COMPILE = $(CC) $(CFLAGS) 

ARCHIVE := ar
AR_FLAGS := rucs
ADD_LIB :=  $(ARCHIVE) $(AR_FLAGS) $(NAME)

LIBFT_PATH := libft/
LIBFT = $(LIBFT_PATH)libft.a

.PHONY: all bonus clean fclean re libft

all: $(NAME) 
	
$(NAME): $(LIBFT)
	$(COMPILE) $(OBJ) -o $@
	$(ADD_LIB) $(OBJ)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH) all

$(DIR_OBJ):
	mkdir $@

$(DIR_OBJ)%.o:%.c | $(DIR_OBJ)
	$(COMPILE) -c $< -o $@

clean:
	rm -rf $(DIR_OBJ) 
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME) 

re: fclean all
