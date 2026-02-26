/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aisll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <alusnia@student.42Warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 21:30:34 by alusnia           #+#    #+#             */
/*   Updated: 2026/02/26 21:42:04 by alusnia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_aisll(const char *nptr, long long *n)
{
	long long	x;
	int			sign;
	size_t		i;

	x = 0;
	sign = 1;
	i = 0;
	while (nptr[i])
	{
		if ((ft_isspace(nptr[i]) || nptr[i] == '+')
			&& (i == 0 || ft_isspace(nptr[i - 1])))
			i++;
		else if (nptr[i] == '-' && (i == 0 || ft_isspace(nptr[i - 1])))
		{
			sign = -1;
			i++;
		}
		else if (ft_isdigit(nptr[i]) != 0 && x == (x * 10) / 10)
			x = (x * 10) + (nptr[i++] - '0');
		else
			break ;
	}
	if (nptr[i])
		return (*n = 0, 0);
	return (*n = x * sign, 1);
}
