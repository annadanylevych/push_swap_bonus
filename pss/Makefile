SRCS =	stack_creation.c push_swap.c validation.c movements_s.c \
		movements_r.c movements_utils.c movements_rr.c \
		process.c movements_p.c pricing.c process_2.c sort_four.c process_3.c

CHECK_SRCS =	chicker/checker.c chicker/checker.stacks.c chicker/checker_movements2.c chicker/checker_val.c chicker/checker_movements.c chicker/checker_utils.c chicker/cheker_movements3.c\
				gnl/get_next_line.c gnl/get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

CHECK_OBJS = $(CHECK_SRCS:.c=.o)

LIBFTDIR = lib/

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

CHECK = checker

HEADER = push_swap.h

%.o:%.c	$(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJS) make_libs
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFTDIR) -lft -o $(NAME)

$(CHECK):	$(CHECK_OBJS)
	$(CC) $(CFLAGS) $(CHECK_OBJS) -o $(CHECK)
make_libs:
	$(MAKE) -C $(LIBFTDIR)

clean:
	$(RM) $(OBJS) 
	$(RM) $(CHECK_OBJS)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	$(RM) $(NAME) 
	$(RM) $(CHECK)
	$(MAKE) -C $(LIBFTDIR) fclean
	
re: fclean make_libs $(NAME)

.PHONY: all clean fclean re

