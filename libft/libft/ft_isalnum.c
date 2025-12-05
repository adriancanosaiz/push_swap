/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:22:11 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 12:31:38 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Checks if the given character is alphanumeric (either a letter or a digit).
/// @param c The character to be checked.
/// @return Returns a non-zero value if the character is alphanumeric, 
/// 	otherwise returns 0.

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
