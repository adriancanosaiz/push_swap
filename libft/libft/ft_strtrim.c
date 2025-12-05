/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:49:30 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 11:51:15 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Trims characters from the beginning and end of a string.
/// @param s The original string to be trimmed.
/// @param set The set of characters to trim from the string.
/// @return A new string with the trimmed content.

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_strchr(set, s[end - 1]))
		end--;
	return (ft_substr(s, start, end - start));
}
