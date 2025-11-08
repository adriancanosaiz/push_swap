/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:43:45 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/09 13:31:04 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Locates the first occurrence of the character c in the string s.
/// @param s The string to be searched.
/// @param c The character to be located 
///		(passed as an int, but treated as a char).
/// @return A pointer to the first occurrence 
///		of the character c in the string s, 
///		or NULL if the character is not found. 
///		If c is '\0', returns a pointer to the null terminator of s.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
