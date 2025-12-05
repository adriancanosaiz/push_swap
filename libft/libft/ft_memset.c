/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:51:16 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 12:37:27 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Sets the first n bytes of the memory area pointed 
///		to by s to the specified byte value c.
/// @param s Pointer to the memory area to be set.
/// @param c The byte value to set (converted to an unsigned char).
/// @param n Number of bytes to be set.
/// @return Returns a pointer to the memory area s.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
