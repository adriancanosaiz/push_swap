/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

/*
** s_node - Nodo de nuestra lista enlazada que representa una pila.  Cada
** elemento tiene un valor original (value), un índice asignado (index) y
** un puntero al siguiente nodo.  El índice se utiliza por el algoritmo
** principal para clasificar más fácilmente los elementos en grupos.
*/
typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
}   t_node;

/*
** Parsing
*/
t_node  *parse_args(int argc, char **argv);
int     check_numeric(char *str);
int     check_int_range(const char *str);
int     has_duplicates(t_node *stack);
t_node  *build_stack(char **split);

/*
** Pila básica
*/
void    stack_add_back(t_node **stack, t_node *new);
t_node  *stack_new(int value);
int     stack_size(t_node *stack);
void    stack_clear(t_node **stack);
t_node  *stack_last(t_node *stack);

/*
** Operaciones de movimiento (swap, push, rotate, reverse rotate)
*/
void    sa(t_node **a, int print);
void    sb(t_node **b, int print);
void    ss(t_node **a, t_node **b, int print);
void    pa(t_node **a, t_node **b, int print);
void    pb(t_node **a, t_node **b, int print);
void    ra(t_node **a, int print);
void    rb(t_node **b, int print);
void    rr(t_node **a, t_node **b, int print);
void    rra(t_node **a, int print);
void    rrb(t_node **b, int print);
void    rrr(t_node **a, t_node **b, int print);

/*
** Utilidades
*/
void    print_error_and_exit(t_node **a, t_node **b);
int     is_sorted(t_node *a);
void    assign_indexes(t_node *a);
int     find_max_index(t_node *stack);
int     position_of_index(t_node *stack, int index);

/*
** Algoritmo
*/
void    sort_stack(t_node **a, t_node **b);
void    sort_three(t_node **a);
void    sort_five(t_node **a, t_node **b);
void    sort_big(t_node **a, t_node **b);

#endif