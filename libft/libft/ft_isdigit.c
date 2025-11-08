/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:22:26 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 12:32:21 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Checks if the given character is a digit (0-9).
/// @param c The character to be checked.
/// @return Returns a non-zero value if the character is a digit,
///		otherwise returns 0.

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
