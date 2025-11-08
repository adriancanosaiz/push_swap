# Nombre del programa principal y bonus
NAME    = push_swap
CHECKER = checker

# Compilador y flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -Iincludes

# Fuentes de Libft
LIBFT_DIR = ./libft
LIBFT     = $(LIBFT_DIR)/libft.a

# Fuentes de Push_swap
SRC_FILES = main.c \
            parser.c \
            operations_a.c \
            operations_b.c \
            operations_ss_rr.c \
            sort_logic.c \
            sort_small.c \
            sort_large_radix.c \
            utils_stack.c \
            utils_error.c
            
# Fuentes del Checker (Bonus)
CHECKER_FILES = checker/checker_main.c \
                checker/checker_utils.c \
                parser.c \
                operations_a.c \
                operations_b.c \
                operations_ss_rr.c \
                utils_stack.c \
                utils_error.c
                
# Convertir .c en .o (archivos objeto)
OBJS = $(SRC_FILES:.c=.o)
CHECKER_OBJS = $(CHECKER_FILES:.c=.o)

# Regla principal
all: $(NAME)

# Regla para compilar Libft
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Regla para compilar push_swap
$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "push_swap compiled!"

# Regla para compilar el checker (bonus)
bonus: $(CHECKER_OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(CHECKER_OBJS) $(LIBFT) -o $(CHECKER)
	@echo "checker compiled!"

# Regla para compilar archivos .c a .o
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Limpieza
clean:
	@rm -f $(OBJS) $(CHECKER_OBJS)
	@make -C $(LIBFT_DIR) clean
	@echo "Objects cleaned."

fclean: clean
	@rm -f $(NAME) $(CHECKER)
	@rm -f $(LIBFT)
	@echo "All cleaned."

re: fclean all

.PHONY: all clean fclean re bonus