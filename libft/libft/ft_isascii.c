/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:22:23 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 12:32:11 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Checks if the given character is an ASCII character (in the range 0 to 127).
/// @param c The character to be checked.
/// @return Returns a non-zero value if the character is an ASCII character,
///		otherwise returns 0.

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
