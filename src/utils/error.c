/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** print_error_and_exit -- Libera las pilas proporcionadas, imprime
** "Error" en stderr y termina el programa con EXIT_FAILURE.  Se
** utiliza para cualquier caso de error durante el parsing o la
** ejecución.
*/
void    print_error_and_exit(t_node **a, t_node **b)
{
    if (a && *a)
        stack_clear(a);
    if (b && *b)
        stack_clear(b);
    ft_putendl_fd("Error", 2);
    exit(EXIT_FAILURE);
}