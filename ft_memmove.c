#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*temp;

	temp = (char *)src;
	i = -1;
	while (++i < len)
		*((char *)dst + i) = temp[i];
	return (dst);
}
