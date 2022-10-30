CC		= gcc

FLAGS	= -Wall -Wextra -Werror

INCLUDE = include

HEADERS = $(INCLUDE)/c_math.h


NAME_MATH_LIB = lib_math.a

F_NONE		= \033[37m
F_BOLD		= \033[1m
F_RED		= \033[31m
F_ORANGE	= \033[38m
F_YELLOW	= \033[0;33m
F_GREEN		= \033[32m
F_CYAN		= \033[36m
F_BLUE		= \033[34m 

SRCS = srcs/c_abs.c            srcs/c_asin.c           srcs/c_ceil.c           srcs/c_exp.c            srcs/c_factorial.c      srcs/c_fmod.c           srcs/c_pow.c            srcs/c_sqrt.c\
srcs/c_acos.c           srcs/c_atan.c           srcs/c_cos.c            srcs/c_fabs.c           srcs/c_floor.c          srcs/c_log.c            srcs/c_sin.c            srcs/c_tan.c

OBJS	= $(SRCS:.c=.o)

AR		= ar rc



.c.o:
	$(CC) $(FLAGS) -c -I$(INCLUDE) $< -o $(<:.c=.o)

all: $(NAME_MATH_LIB)
	

$(NAME_MATH_LIB): $(OBJS)
	$(AR) $(NAME_MATH_LIB) $(OBJS)
	ranlib $(NAME_MATH_LIB)


clean:
	rm $(OBJS)


fclean: clean
	rm -rf $(NAME_MATH_LIB)

re: fclean all


code:
	@echo " ~~~~~~~~~~~~~~~~"
	@echo "$(F_BOLD)  * Make code, *"
	@echo "$(F_BOLD)   * not war! *"
	@echo "$(F_RED)    ..10101.."
	@echo "$(F_ORANGE)  01   1   011"
	@echo "$(F_YELLOW) 10     0     00"
	@echo "$(F_GREEN) 11   .010.   11"
	@echo "$(F_CYAN) 00 .01 1 01. 10"
	@echo "$(F_BLUE) 010   1   110"
	@echo "$(F_BLUE)   11011010**$(F_NONE)"

.PHONY:     all clean fclean re bonus code