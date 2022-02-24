#include "libft.h"

void	*ft_memchr(const void *s, int n, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (*((char *)s + i) == n)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (0);
}
