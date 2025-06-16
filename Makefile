# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/15 21:59:08 by thamahag          #+#    #+#              #
#    Updated: 2025/06/15 21:59:08 by thamahag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET := libft.a

CC := cc
CFLAG += -g3 -Wall -Wextra -Werror
RM := rm -rf

# Define Directory
SRCS_DIR = srcs
OBJS_DIR = objs
INCS_DIR = includes
# Defind files to create
SRCS := ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp \
	ft_strlen ft_strdup ft_strncpy ft_strncpy
# Add Prefix directory to compile .c $(addprefix src/,foo bar)
#	the result src/foo src/bar.
# String substitution $(patsubst pattern,replaceme`nt, text)
# $(patsubst %.c,%.o,x.c.c bar.c)
# 	produces the value ‘x.c.o bar.o’.
# $(patsubst %.o,%.c,$(objects)) = $(object:.o=.c)
# Assign OBJS with all substitute .c files at individual .o files
SRCS := $(addsuffix .c, $(SRCS))
OBJS := $(SRCS:.c=.o)
SRCS := $(addprefix $(SRCS_DIR)/, $(SRCS))
OBJS := $(addprefix $(OBJS_DIR)/, $(OBJS))

all: $(TARGET)

$(TARGET) : $(OBJS)
	ar rcs $@ $^

# $(TARGET) : $(OBJS)
# 	$(CC) $(CFLAG) -I $(INCS_DIR) $^ -o $@

# pattern match of target with correspond prerequirement one by one
# -I add directory search list for #include files with relative file names.

# Old template
#/%.o: /%.c
#	mkdir -p $(OBJS_DIR)
#	$(CC) $(CFLAG) -I $(INCS_DIR) -c $< -o $@
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAG) -I $(INCS_DIR) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(TARGET)

re : fclean all

# Tell makefile that any file with these name won't cause conflict with make
PHONY: all clean fclean re

# @echo - normally run but if add in make -s it will silent any @ line

# Automatic Vriable
# $@ - Current Target name
# $< - First prerequistic only
# $^ - All prerequisites
# $? - Prerequisite that have changed
# $| - Order-only prerequisite - Need more example
#	$(TARGET) : $(OBJS) | $(DIR)

# Rules
# There are implicit default rule to built different file type
#	so it would be better to define your own


# Assignment Variable Operator
# =  - verbatim assignment assign value to variable as is
# := - simple expansion, unlimited recursion expand till it all text
# != - Shell output
# ?= - Will set variable if it didn't set before
# += - Append to the variable

# Built in function
# Text function
# $(SRCS:.c=.o)

# Filename function
# $(addprefix build/,$(OBJS))

# Conditional function
# $(if ..) $(or ..) $(and ..)
# $(foreach var,list,text)
# $(value (VARIABLE))

# Shell Function
# $(shell ..)

# Contraol Function
# $(error ..) Halt the building at that point
# $(warning ..) Give warning
# $(info ..) Give info

# Compiling flag
# -Ldir Adds directory linker searches list for library
# -lname Links with object library libname.so, or libname.a.
#	-l and name after the lib like libfoo.a -lfoo
# -Idir Adds directory to searched for #include files with relative file names.

# Step
# 1. Should print all command it running
# 2. Shouldn't make unnessary command
# 3. All .c files are in srcs directory
#	ft_putchar.c, ft_swap.c, ft_putstr.c, ft_strlen.c, ft_strcmp.c
# 4. Put header files into includes directory
# 5. Compile c files with -Wall -Wextra -Werror
# 6. -c object files should output in the same place as srcs directory
# 7. libft.a should be at root of the ex01
# 8. Required rule: clean, fclean, re, all, and libft.a
# 9. Make = all, all should make libft.a
# 10. clean - should remove all temp .o files
# 11. fclean - run clean then remove all generate binary
# 12. re - run make fclean then make all

# Warning no wildcard

# libft.a are usually called static library are usually create by ar archive
#	which can be use with compiler as linker input file with option -l(name)
#	eg: libft.a can be link with -lft the ar add phony hidden name of the object
#	as a lookup table for linker to search from appropriate symbol index to
#	add correct object to unresolve symbol reference when compile
#	difference from dynamic library which has extension of .so
