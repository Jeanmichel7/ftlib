/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:01:38 by jrasser           #+#    #+#             */
/*   Updated: 2022/02/21 14:31:05 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int	res;
	int	ft_res;
	int c;

	c = 101;

	printf("char : %c, int : %d\n", c, c);
	res = isalpha(c);
	ft_res = ft_isalpha(c);
	printf("res    : %d\n", res);
	printf("ft_res : %d\n", ft_res);
	return (0);
}
*/
