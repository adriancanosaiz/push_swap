/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** swap -- Intercambia los dos primeros nodos de la pila dada.  No
** imprime nada por sí mismo; la impresión se hace en las funciones
** públicas si se pasa print=1.
*/
static void swap(t_node **stack)
{
    t_node  *first;
    t_node  *second;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
}

void    sa(t_node **a, int print)
{
    swap(a);
    if (print)
        ft_putendl_fd("sa", 1);
}

void    sb(t_node **b, int print)
{
    swap(b);
    if (print)
        ft_putendl_fd("sb", 1);
}

void    ss(t_node **a, t_node **b, int print)
{
    swap(a);
    swap(b);
    if (print)
        ft_putendl_fd("ss", 1);
}