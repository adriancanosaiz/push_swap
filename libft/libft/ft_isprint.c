/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:49:18 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 12:32:32 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Checks if the given character is a printable character (including space).
/// @param c The character to be checked.
/// @return Returns a non-zero value if the character is printable, 
///		otherwise returns 0.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
