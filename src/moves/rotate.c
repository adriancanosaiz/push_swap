/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** rotate -- Mueve el primer elemento de la pila al final.  No imprime
** nada por sí solo.  Usada por ra, rb y rr.
*/
static void rotate(t_node **stack)
{
    t_node  *first;
    t_node  *last;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    first = *stack;
    last = stack_last(*stack);
    *stack = first->next;
    first->next = NULL;
    last->next = first;
}

void    ra(t_node **a, int print)
{
    rotate(a);
    if (print)
        ft_putendl_fd("ra", 1);
}

void    rb(t_node **b, int print)
{
    rotate(b);
    if (print)
        ft_putendl_fd("rb", 1);
}

void    rr(t_node **a, t_node **b, int print)
{
    rotate(a);
    rotate(b);
    if (print)
        ft_putendl_fd("rr", 1);
}