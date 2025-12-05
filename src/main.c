/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Punto de entrada del programa.  Crea la pila inicial a partir de los
** argumentos proporcionados, verifica la validez de los datos y si la
** lista ya está ordenada.  Si necesita ordenación, asigna índices y
** ejecuta el algoritmo principal.  Finalmente libera toda la memoria.
*/
int main(int argc, char **argv)
{
    t_node  *a;
    t_node  *b;

    if (argc < 2)
        return (0);
    a = parse_args(argc, argv);
    if (!a)
        return (0);
    if (has_duplicates(a))
        print_error_and_exit(&a, NULL);
    if (is_sorted(a))
    {
        stack_clear(&a);
        return (0);
    }
    assign_indexes(a);
    b = NULL;
    sort_stack(&a, &b);
    stack_clear(&a);
    stack_clear(&b);
    return (0);
}