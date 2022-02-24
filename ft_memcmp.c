#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((char *)s2 + i) != *((char *)s1 + i))
		{
			if (*((char *)s2 + i) - *((char *)s1 + i) != 0)
				return (*((char *)s1 + i) - *((char *)s2 + i));
			else
				return (0);
		}
		i++;
	}
	return (0);
}
