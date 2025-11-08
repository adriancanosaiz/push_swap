/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:39:17 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 12:44:06 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// Copies n bytes from memory area src to memory area dest.
/// @param dest Pointer to the destination memory area 
/// 	where bytes will be copied.
/// @param src Pointer to the source memory area 
/// 	from which bytes will be copied.
/// @param n Number of bytes to copy.
/// @return Returns a pointer to the destination memory area dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src && n > 0)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
