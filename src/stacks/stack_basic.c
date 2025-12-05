/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_basic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** stack_new -- Reserva memoria para un nuevo nodo con el valor dado
** y devuelve un puntero a él.  Inicializa index a -1 y next a NULL.
*/
t_node  *stack_new(int value)
{
    t_node  *node;

    node = (t_node *)malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node->value = value;
    node->index = -1;
    node->next = NULL;
    return (node);
}

/*
** stack_add_back -- Añade un nodo al final de la lista.  Si la lista
** está vacía, establece el nuevo nodo como la cabeza.
*/
void    stack_add_back(t_node **stack, t_node *new)
{
    t_node  *last;

    if (!stack || !new)
        return ;
    if (!*stack)
    {
        *stack = new;
        return ;
    }
    last = *stack;
    while (last->next)
        last = last->next;
    last->next = new;
}

/*
** stack_clear -- Libera toda la lista, poniendo el puntero
** proporcionado a NULL.
*/
void    stack_clear(t_node **stack)
{
    t_node  *tmp;

    if (!stack)
        return ;
    while (*stack)
    {
        tmp = (*stack)->next;
        free(*stack);
        *stack = tmp;
    }
}

/*
** stack_last -- Devuelve el último nodo de la lista.  Si la lista
** está vacía, devuelve NULL.
*/
t_node  *stack_last(t_node *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}