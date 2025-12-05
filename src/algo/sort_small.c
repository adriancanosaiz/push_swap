/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** sort_two -- Caso trivial de 2 elementos.  Si están al revés,
** ejecuta sa.
*/
static void sort_two(t_node **a)
{
    if ((*a)->value > (*a)->next->value)
        sa(a, 1);
}

/*
** sort_three -- Ordena tres elementos usando un conjunto mínimo
** de operaciones.  Se identifican cinco patrones de desorden.
*/
void    sort_three(t_node **a)
{
    int x;
    int y;
    int z;

    x = (*a)->value;
    y = (*a)->next->value;
    z = (*a)->next->next->value;
    if (x > y && y < z && x < z)
        sa(a, 1);
    else if (x > y && y > z)
    {
        sa(a, 1);
        rra(a, 1);
    }
    else if (x > y && y < z && x > z)
        ra(a, 1);
    else if (x < y && y > z && x < z)
    {
        sa(a, 1);
        ra(a, 1);
    }
    else if (x < y && y > z && x > z)
        rra(a, 1);
}

/*
** find_min_pos -- Devuelve la posición del nodo con el valor mínimo
** en la pila.  Se usa para sacar los mínimos a B en sort_five.
*/
static int find_min_pos(t_node *a)
{
    int pos;
    int min_pos;
    int min_val;

    pos = 0;
    min_pos = 0;
    min_val = a->value;
    while (a)
    {
        if (a->value < min_val)
        {
            min_val = a->value;
            min_pos = pos;
        }
        pos++;
        a = a->next;
    }
    return (min_pos);
}

/*
** sort_five -- Ordena pilas de tamaño 4 o 5.  Se envían los
** elementos mínimos a B hasta que queden 3 en A.  Luego se
** ordenan esos 3 y finalmente se devuelve todo a A.
*/
void    sort_five(t_node **a, t_node **b)
{
    int size;
    int min_pos;

    size = stack_size(*a);
    while (size > 3)
    {
        min_pos = find_min_pos(*a);
        if (min_pos <= size / 2)
            while (min_pos-- > 0)
                ra(a, 1);
        else
            while (min_pos++ < size)
                rra(a, 1);
        pb(a, b, 1);
        size = stack_size(*a);
    }
    sort_three(a);
    while (*b)
        pa(a, b, 1);
}

/*
** sort_stack -- Selecciona el algoritmo apropiado según el
** tamaño de la pila inicial.  2, 3, 4 o 5 se manejan con
** algoritmos dedicados.  Para tamaños mayores se llama a sort_big.
*/
void    sort_stack(t_node **a, t_node **b)
{
    int size;

    size = stack_size(*a);
    if (size == 2)
        sort_two(a);
    else if (size == 3)
        sort_three(a);
    else if (size <= 5)
        sort_five(a, b);
    else
        sort_big(a, b);
}