/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** stack_to_array -- Copia los valores de la pila a un array de ints.
*/
static int *stack_to_array(t_node *a, int size)
{
    int *arr;
    int i;

    arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return (NULL);
    i = 0;
    while (a)
    {
        arr[i++] = a->value;
        a = a->next;
    }
    return (arr);
}

/*
** sort_array -- Ordena un array de ints usando bubble sort.
** Es suficiente para nuestro rango de tamaño (<= 500).
*/
static void sort_array(int *arr, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}

/*
** index_of -- Busca la posición de 'value' en el array ordenado.
*/
static int index_of(int *arr, int size, int value)
{
    int i;

    i = 0;
    while (i < size)
    {
        if (arr[i] == value)
            return (i);
        i++;
    }
    return (-1);
}

/*
** assign_indexes -- Asigna a cada nodo un índice del 0 al n-1 según
** el orden numérico.  Esto se utiliza para agilizar el algoritmo.
*/
void    assign_indexes(t_node *a)
{
    int     size;
    int     *arr;
    t_node  *tmp;

    size = stack_size(a);
    arr = stack_to_array(a, size);
    if (!arr)
        print_error_and_exit(&a, NULL);
    sort_array(arr, size);
    tmp = a;
    while (tmp)
    {
        tmp->index = index_of(arr, size, tmp->value);
        tmp = tmp->next;
    }
    free(arr);
}

/*
** find_max_index -- Devuelve el índice máximo presente en la pila.
*/
int     find_max_index(t_node *stack)
{
    int max;

    max = 0;
    while (stack)
    {
        if (stack->index > max)
            max = stack->index;
        stack = stack->next;
    }
    return (max);
}

/*
** position_of_index -- Devuelve la posición (base 0) del primer nodo
** cuyo índice coincide con 'index'.  Si no se encuentra, devuelve -1.
*/
int     position_of_index(t_node *stack, int index)
{
    int pos;

    pos = 0;
    while (stack)
    {
        if (stack->index == index)
            return (pos);
        stack = stack->next;
        pos++;
    }
    return (-1);
}