/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:42:53 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 12:42:15 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Converts a lowercase letter to its uppercase equivalent. 
///		If the character is not a lowercase letter, it is returned unchanged.
/// @param c The character to be converted.
/// @return The uppercase equivalent of the character 
///		if it is a lowercase letter; otherwise, returns the character unchanged.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
