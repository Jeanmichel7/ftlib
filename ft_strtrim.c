/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:00:23 by jrasser           #+#    #+#             */
/*   Updated: 2022/02/25 21:00:23 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* trim space ? */

int	check_trim(const char *s1, unsigned int index, const char *set, unsigned int len)
{
	unsigned int	i;
	i = 0;
	while (s1[index + i] == set[i] && set[i])
		i++;
	if (i == len)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	unsigned int	k;
	unsigned int	len_s1;
	unsigned int	len_set;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	str = malloc(sizeof(char) * (len_s1 + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
	{
		if ((i == 0 && check_trim(s1, i, set, len_set)) || (i == len_s1 - len_set && check_trim(s1, i, set, len_set)))
			i += len_set;
		else
			str[k++] = s1[i++];
	}
	str[k] = '\0';
	return (str);
}
