/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:00:34 by jrasser           #+#    #+#             */
/*   Updated: 2022/02/25 21:00:34 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count(const char *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		if (s[i])
			count++;
		else
			if (s[i - 1] != c)
				count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	tab = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_count(s, c))
	{
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (str == NULL)
			return (NULL);
		k = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
			str[k++] = s[j++];
		str[k] = '\0';
		tab[i++] = str;
	}
	tab[i] = NULL;
	return (tab);
}