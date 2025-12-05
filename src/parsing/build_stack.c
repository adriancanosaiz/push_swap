/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** build_stack -- Crea una lista enlazada a partir del array de
** cadenas split, ya validado.  Convierte cada cadena a int y la
** añade al final de la lista.  Devuelve un puntero a la pila.
*/
t_node  *build_stack(char **split)
{
    t_node  *a;
    long    value;
    int     i;

    a = NULL;
    i = 0;
    while (split[i])
    {
        value = ft_atoi(split[i]);
        stack_add_back(&a, stack_new((int)value));
        i++;
    }
    return (a);
}