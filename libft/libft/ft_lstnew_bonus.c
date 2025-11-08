/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-sa <acano-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:17:36 by acano-sa          #+#    #+#             */
/*   Updated: 2025/10/09 13:15:48 by acano-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*point;

	point = malloc(sizeof(t_list));
	if (!point)
		return (NULL);
	point->content = content;
	point->next = NULL;
	return (point);
}
