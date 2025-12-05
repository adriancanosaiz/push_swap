/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** check_numeric -- Devuelve 1 si el string representa un entero válido,
** permitiendo un signo opcional al inicio y luego solo dígitos.
*/
int check_numeric(char *str)
{
    int i;

    if (!str || !str[0])
        return (0);
    i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    if (!str[i])
        return (0);
    while (str[i])
    {
        if (!ft_isdigit((unsigned char)str[i]))
            return (0);
        i++;
    }
    return (1);
}

/*
** check_int_range -- Verifica que el string convertido a long
** esté dentro del rango de un int (32 bits).  Devuelve 1 si está
** dentro del rango, 0 en caso contrario.
*/
int check_int_range(const char *str)
{
    long    result;
    long    sign;
    int     i;

    result = 0;
    sign = 1;
    i = 0;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        result = result * 10 + (str[i] - '0');
        if (sign * result > 2147483647 || sign * result < -2147483648)
            return (0);
        i++;
    }
    return (1);
}

/*
** has_duplicates -- Comprueba si hay valores duplicados en la lista
** enlazada.  Devuelve 1 si se encuentra un duplicado, 0 en caso
** contrario.
*/
int has_duplicates(t_node *stack)
{
    t_node  *cur;
    t_node  *tmp;

    cur = stack;
    while (cur)
    {
        tmp = cur->next;
        while (tmp)
        {
            if (tmp->value == cur->value)
                return (1);
            tmp = tmp->next;
        }
        cur = cur->next;
    }
    return (0);
}