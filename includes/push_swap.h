#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h> // Para malloc, free, exit
# include <unistd.h> // Para write
# include "../libft/libft.h" // Incluye tu libft (ajusta la ruta)

/* --- ESTRUCTURAS --- */

// Nodo de la lista (un número en el stack)
typedef struct s_node
{
    int             value;  // El valor (ej: 80, -10, 500)
    int             index;  // El "rango" (ej: 2, 0, 1)
    struct s_node   *next;  // El nodo de abajo
    struct s_node   *prev;  // El nodo de arriba
}   t_node;

// El stack (que apunta al nodo de arriba)
typedef struct s_stack
{
    t_node  *top;   // Cima del stack
    int     size;   // Número de elementos
}   t_stack;


/* --- PROTOTIPOS DE FUNCIONES --- */

/* --- 1. Parser y Creación --- */
t_stack *parse_arguments(int argc, char **argv);
void    assign_indexes(t_stack *a);
int     is_sorted(t_stack *stack);

/* --- 2. Operaciones --- */
// (Vamos a hacer funciones que "hacen" y "escriben" la operación)
void    sa(t_stack *a, int print);
void    sb(t_stack *b, int print);
void    ss(t_stack *a, t_stack *b, int print);
void    pa(t_stack *a, t_stack *b, int print);
void    pb(t_stack *a, t_stack *b, int print);
void    ra(t_stack *a, int print);
void    rb(t_stack *b, int print);
void    rr(t_stack *a, t_stack *b, int print);
void    rra(t_stack *a, int print);
void    rrb(t_stack *b, int print);
void    rrr(t_stack *a, t_stack *b, int print);

/* --- 3. Algoritmos --- */
void    sort_logic(t_stack *a, t_stack *b);
void    sort_three(t_stack *a);
void    sort_small(t_stack *a, t_stack *b); // Para 4 y 5
void    radix_sort(t_stack *a, t_stack *b); // Para más de 5

/* --- 4. Utils (Ayudantes) --- */
void    free_stack(t_stack *stack);
void    exit_error(void); // Imprime "Error" y sale
t_node  *find_min_node(t_stack *stack);
// ... (añade las que necesites) ...

#endif