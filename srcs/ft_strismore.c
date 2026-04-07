/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strismore.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <alusnia@student.42Warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:07:37 by alusnia           #+#    #+#             */
/*   Updated: 2026/04/07 10:27:59 by alusnia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*if left > right function returns 1, if funtion is being used multiple times
on the same string it is better to include size of static string, otherwise it
is possible to leave size as 0*/
int	ft_strismore(const char *left, const char *right, size_t size)
{
	if (size == 0)
		size = ft_strlen(right);
	size++;
	if (ft_strncmp(left, right, ft_strlen(right) + 1) > 0)
		return (1);
	return (0);
}
