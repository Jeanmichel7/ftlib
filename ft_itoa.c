/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:00:45 by jrasser           #+#    #+#             */
/*   Updated: 2022/02/25 21:00:45 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *s, int n)
{
	char	*str_temp;
	int 	i;
	int		len;

	len = ft_strlen(s);
	str_temp = malloc(sizeof(char) * (len + 1));
	i = -1;
	while (i < n){
		str_temp[i] = s[i];
		i++;
	}
	str_temp[i] = '\0';
	i = -1;
	while (str_temp[++i])
		s[i] = str_temp[len - i - 1];
	s[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	str = malloc(sizeof(char) * 13);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (n / 10)
	{
		str[i] = ((n % 10) * sign) + '0';
		n /= 10;
		i++;
	}
	str[i++] = (n * sign) + '0';
	if (sign == -1)
		str[i++] = '-';
	str[i] = '\0';
	ft_reverse(str, i);
	return (str);
}


