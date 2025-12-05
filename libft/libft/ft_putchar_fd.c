/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:20:36 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/06 12:21:17 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// Writes a character to the specified file descriptor.
/// @param c The character to write.
/// @param fd The file descriptor to write to.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
