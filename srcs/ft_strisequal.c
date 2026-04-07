/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisequal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <alusnia@student.42Warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:08:53 by alusnia           #+#    #+#             */
/*   Updated: 2026/04/07 10:10:20 by alusnia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//if left == right function returns 1
int	ft_strisequal(const char *left, const char *right)
{
	if (ft_strncmp(left, right, ft_strlen(right) + 1) == 0)
		return (1);
	return (0);
}
