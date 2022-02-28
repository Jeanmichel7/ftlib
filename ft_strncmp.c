/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 00:50:23 by jrasser           #+#    #+#             */
/*   Updated: 2022/02/25 00:50:23 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			if (s2[i] - s1[i] > 0)
				return (-1);
			else if (s2[i] - s1[i] < 0)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}
