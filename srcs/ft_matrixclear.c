/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <alusnia@student.42Warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:54:24 by alusnia           #+#    #+#             */
/*   Updated: 2026/02/16 12:04:59 by alusnia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matrixclear(char **matrix)
{
	size_t	n;

	n = 0;
	if (!matrix)
		return ;
	while (matrix[n])
		free(matrix[n++]);
	free(matrix);
}
