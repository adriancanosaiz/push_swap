/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Adrián <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 00:00:00 by Adrián           #+#    #+#             */
/*   Updated: 2025/11/23 00:00:00 by Adrián          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** join_and_split -- Concatena todos los argumentos (excepto argv[0]) en
** un único string separado por espacios y luego los divide usando ft_split.
** Esto permite aceptar tanto argumentos separados como una cadena entre
** comillas.  Devuelve un array de strings terminados en NULL.
*/
static char **join_and_split(int argc, char **argv)
{
    char    *joined;
    char    *tmp;
    char    **split;
    int     i;

    joined = ft_strdup("");
    if (!joined)
        return (NULL);
    i = 1;
    while (i < argc)
    {
        tmp = ft_strjoin(joined, " ");
        free(joined);
        if (!tmp)
            return (NULL);
        joined = ft_strjoin(tmp, argv[i]);
        free(tmp);
        if (!joined)
            return (NULL);
        i++;
    }
    split = ft_split(joined, ' ');
    free(joined);
    return (split);
}

/*
** free_split -- Libera un array de strings creado por ft_split.
*/
static void free_split(char **split)
{
    int i;

    if (!split)
        return ;
    i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}

/*
** parse_args -- Punto de entrada del parsing.  Une y separa los
** argumentos, verifica que cada token sea numérico y esté dentro del
** rango de un int, luego construye una pila enlazada con build_stack.
** Si hay un error de memoria o un token inválido, se imprime "Error"
** y se termina.
*/
t_node *parse_args(int argc, char **argv)
{
    char    **split;
    t_node  *a;
    int     i;

    split = join_and_split(argc, argv);
    if (!split || !split[0])
    {
        free_split(split);
        return (NULL);
    }
    i = 0;
    while (split[i])
    {
        if (!check_numeric(split[i]) || !check_int_range(split[i]))
        {
            free_split(split);
            print_error_and_exit(NULL, NULL);
        }
        i++;
    }
    a = build_stack(split);
    free_split(split);
    return (a);
}