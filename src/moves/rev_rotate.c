/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** reverse_rotate -- Mueve el último elemento de la pila al principio.
** No imprime nada por sí sola.  Utilizada por rra, rrb y rrr.
*/
static void reverse_rotate(t_node **stack)
{
    t_node  *prev;
    t_node  *last;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    prev = NULL;
    last = *stack;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    if (prev)
        prev->next = NULL;
    last->next = *stack;
    *stack = last;
}

void    rra(t_node **a, int print)
{
    reverse_rotate(a);
    if (print)
        ft_putendl_fd("rra", 1);
}

void    rrb(t_node **b, int print)
{
    reverse_rotate(b);
    if (print)
        ft_putendl_fd("rrb", 1);
}

void    rrr(t_node **a, t_node **b, int print)
{
    reverse_rotate(a);
    reverse_rotate(b);
    if (print)
        ft_putendl_fd("rrr", 1);
}