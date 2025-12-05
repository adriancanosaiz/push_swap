/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** push -- Toma el primer elemento de la pila 'from' y lo coloca al
** principio de la pila 'to'.  Utilizada por pa y pb.
*/
static void push(t_node **from, t_node **to)
{
    t_node  *tmp;

    if (!from || !*from)
        return ;
    tmp = *from;
    *from = (*from)->next;
    tmp->next = *to;
    *to = tmp;
}

void    pa(t_node **a, t_node **b, int print)
{
    push(b, a);
    if (print)
        ft_putendl_fd("pa", 1);
}

void    pb(t_node **a, t_node **b, int print)
{
    push(a, b);
    if (print)
        ft_putendl_fd("pb", 1);
}