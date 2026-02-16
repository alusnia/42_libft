/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <alusnia@student.42Warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:00:58 by alusnia           #+#    #+#             */
/*   Updated: 2026/02/16 12:05:48 by alusnia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	**ft_matrixjoin(char **matrix_1, char **matrix_2)
{
	size_t	n;
	char	**new_matrix;

	n = ft_matrixlen(matrix_1);
	n += ft_matrixlen(matrix_2);
	new_matrix = malloc((n + 1) * sizeof(char *));
	if (!new_matrix)
		return (NULL);
	n = ft_matrixlen(matrix_1);
	ft_memcpy(new_matrix, matrix_1, n * sizeof(char *));
	ft_memcpy(new_matrix + n, matrix_2,
		((ft_matrixlen(matrix_2) + 1) * sizeof(char *)));
	return (new_matrix);
}
